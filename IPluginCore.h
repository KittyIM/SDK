#ifndef SDK_IPLUGINCORE_H
#define SDK_IPLUGINCORE_H

#include "IMessage.h"

#include <QtCore/QVariant>

class QToolButton;
class QString;
class QAction;

namespace KittySDK
{
	class ISettingsPage;
	class IAccount;

	class IPluginCore: public QObject
	{
		Q_OBJECT

		public:
			virtual QVariant setting(const QString &key, const QVariant &defaultValue = QVariant()) = 0;
			virtual void setSetting(const QString &key, const QVariant &value) = 0;

			virtual void execPluginAction(const QString &pluginId, const QString &actionName, const QMap<QString, QVariant> &actionArgs) = 0;

			virtual QString profileName() = 0;
			virtual QString kittyDir() = 0;
			virtual QString profilesDir() = 0;
			virtual QString avatarPath(IContact *contact) = 0;

			virtual int contactCount() = 0;
			virtual IContact *contact(const int &id) = 0;
			virtual IContact *contact(const QString &protocol, const QString &account, const QString &uid) = 0;
			virtual QList<IContact*> contacts(const QString &protocol, const QString &account) = 0;
			virtual QList<IContact*> contacts(const QString &protocol) = 0;

			virtual QStringList plugins() = 0;

			virtual QVariant jsonParse(const QString &json) = 0;
			virtual QString jsonStringify(const QVariant &json, int indent = 0) = 0;

			virtual void addSettingPage(ISettingsPage *page, const QString &parent) = 0;
			virtual void removeSettingPage(ISettingsPage *page) = 0;

			virtual void addToolbarAction(const QString &tb, QAction *action) = 0;
			virtual void removeToolbarAction(const QString &tb, QAction *action) = 0;
			virtual QToolButton *buttonForAction(const QString &tb, QAction *action) = 0;

			virtual void addAccount(IAccount *account) = 0;

			virtual QAction *action(const QString &id) = 0;
			virtual void addAction(const QString &id, QAction *action) = 0;
			virtual void removeAction(const QString &id) = 0;

			virtual QPixmap icon(const QString &id) = 0;
			virtual void addIcon(const QString &id, const QPixmap &pixmap, bool replace = true) = 0;
			virtual void removeIcon(const QString &id) = 0;

			virtual quint32 enqueueMsg(const KittySDK::IMessage &msg) = 0;
			virtual void archiveMsg(const KittySDK::IMessage &msg) = 0;

			virtual QString kittyVersion() = 0;

		signals:
			void allPluginsLoaded();

			void allAccountsLoaded();
			void accountsAboutToSave();

			void allContactsLoaded();
			void contactsAboutToSave();
	};
}

#endif // SDK_IPLUGINCORE_H
