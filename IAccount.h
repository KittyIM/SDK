#ifndef SDK_IACCOUNT_H
#define SDK_IACCOUNT_H

#include "IProtocol.h"

#include <QtCore/QDebug>
#include <QtCore/QObject>

class QMenu;

namespace KittySDK
{
	class IContact;
	class IMessage;

	class IAccount: public QObject
	{
		Q_OBJECT
		Q_PROPERTY(QString uid READ uid WRITE setUid)
		Q_PROPERTY(QString password READ password WRITE setPassword)

		public:
			IAccount(const QString &uid, IProtocol *parent): QObject(parent), m_uid(uid), m_protocol(parent) { }

			IProtocol *protocol() const { return m_protocol; }

			QString uid() const { return m_uid; }
			void setUid(const QString &uid) { m_uid = uid; }

			QString password() const { return m_password; }
			void setPassword(const QString &password) { m_password = password; }

			IContact *me() const { return m_me; }
			void setMe(IContact *me) { m_me = me; }

			const QMap<QString, IContact*> &contacts() { return m_contacts; }
			virtual void insertContact(const QString &uid, IContact *contact) { m_contacts.insert(uid, contact); }

			virtual IContact *newContact(const QString &uid) { return 0; }

			virtual IProtocol::Status status() const { return IProtocol::Offline; }
			virtual QString description() const { return QString(); }

		signals:
			void statusChanged(KittySDK::IProtocol::Status status, QString description);
			void messageReceived(KittySDK::IMessage &msg);
			void typingNotifyReceived(KittySDK::IContact *contact, bool typing, const int &length);
			void contactAdded(KittySDK::IContact *contact);

		public slots:
			virtual void loadSettings(const QMap<QString, QVariant> &settings) { }
			virtual QMap<QString, QVariant> saveSettings() { return QMap<QString, QVariant>(); }
			virtual QMenu *statusMenu() { return 0; }
			virtual void changeStatus(const IProtocol::Status &status, const QString &description) { }
			virtual void sendMessage(const IMessage &msg) { }
			virtual void sendTypingNotify(IContact *contact, bool typing, const int &length) { }

		protected:
			QString m_uid;
			QString m_password;
			IContact *m_me;
			QMap<QString, IContact*> m_contacts;
			IProtocol *m_protocol;
	};
}

#endif // SDK_IACCOUNT_H
