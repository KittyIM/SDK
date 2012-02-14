#ifndef SDK_ICONTACT_H
#define SDK_ICONTACT_H

#include "IAccount.h"

#include <QtCore/QString>

namespace KittySDK
{
	class IMessage;

	class IContact: public QObject
	{
		Q_OBJECT
		Q_PROPERTY(QString uid READ uid WRITE setUid)
		Q_PROPERTY(QString display READ display WRITE setDisplay)
		Q_PROPERTY(QString group READ group WRITE setGroup)
		Q_PROPERTY(KittySDK::IProtocol::Status status READ status WRITE setStatus)

		public:
			IContact(const QString &uid, IAccount *account): QObject(account), m_uid(uid), m_status(IProtocol::Offline), m_account(account) { }

			QString uid() const { return m_uid; }
			void setUid(const QString &uid) { m_uid = uid; }

			QString display() const { return m_display; }
			void setDisplay(const QString &display) { m_display = display; }

			QString group() const { return m_group; }
			void setGroup(const QString &group) { m_group = group; }

			IProtocol::Status status() const { return m_status; }
			void setStatus(IProtocol::Status status) { m_status = status; }

			QString description() const { return m_description; }
			void setDescription(const QString &description) { m_description = description; }

			virtual QVariant data(const QString &key) { return m_data.value(key); }
			virtual void setData(const QString &key, const QVariant &value) { m_data.insert(key, value); }

			IAccount *account() const { return m_account; }
			IProtocol *protocol() const { if(m_account) { return m_account->protocol(); } return 0; }

		signals:
			void statusChanged(KittySDK::IProtocol::Status status, const QString &description);
			void dataChanged();

		public slots:
			virtual void prepareContextMenu(QMenu *menu) { }
			virtual QString toolTip() { return QString(); }
			virtual void loadSettings(const QMap<QString, QVariant> &settings) { }
			virtual QMap<QString, QVariant> saveSettings() { return QMap<QString, QVariant>(); }

		protected:
			QString m_uid;
			QString m_display;
			QString m_group;
			IProtocol::Status m_status;
			QString m_description;
			IAccount *m_account;
			QMap<QString, QVariant> m_data;
	};
}

#endif // SDK_ICONTACT_H
