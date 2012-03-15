#ifndef SDK_IPLUGIN_H
#define SDK_IPLUGIN_H

#include "SDKConstants.h"
#include "IPluginCore.h"

#include <QtCore/QObject>
#include <QtCore/QtPlugin>

class QString;

namespace KittySDK
{
	class IAccount;
	class IMessage;

	class IPluginInfo
	{
		public:
			QString name() const { return m_name; }
			void setName(const QString &name) { m_name = name; }

			QString id() const { return m_id; }
			void setId(const QString &id) { m_id = id; }

			QString version() const { return m_version; }
			void setVersion(const QString &version) { m_version = version; }

			QString author() const { return m_author; }
			void setAuthor(const QString &author) { m_author = author; }

			QString email() const { return m_email; }
			void setEmail(const QString &email) { m_email = email; }

			QString url() const { return m_url; }
			void setURL(const QString &url) { m_url = url; }

		private:
			QString m_name;
			QString m_id;
			QString m_version;
			QString m_author;
			QString m_email;
			QString m_url;
	};

	class IPlugin: public QObject
	{
		Q_OBJECT

		public:
			IPlugin(IPluginCore *core):
				QObject(0),
				m_info(0),
				m_core(core)
			{ }

			enum { Type = 1 };
			virtual int type() const { return Type; }

			virtual void init() { }
			virtual void load() { }
			virtual void unload() { }

			IPluginInfo *info() const { return m_info; }
			IPluginCore *core() const { return m_core; }

		public slots:
			virtual void applySettings() { }
			virtual void updateIcons() { }
			virtual void receiveMessage(const IMessage &msg) { }
			virtual void processMessage(IMessage &msg) { }
			virtual void execAction(const QString &name, const QMap<QString, QVariant> &args = QMap<QString, QVariant>()) { }

		protected:
			IPluginInfo *m_info;
			IPluginCore *m_core;
	};
}

#ifdef QT_NO_DEBUG
	#define KITTY_DEBUG_STR "false"
#else
	#define KITTY_DEBUG_STR "true"
#endif

#define KITTY_PLUGIN(PLUGINCLASS) \
	Q_EXTERN_C Q_DECL_EXPORT const char *info() \
{ \
	static const char plug_info[] = "sdkversion=" KITTYSDK_VERSION "\ndebug=" KITTY_DEBUG_STR "\nbuildkey=" QT_BUILD_KEY; \
	return plug_info; \
} \
	Q_EXTERN_C Q_DECL_EXPORT QObject *inst(KittySDK::IPluginCore *core) \
{ \
	static QPointer<QObject> m_inst; \
	if(!m_inst) { \
		m_inst = new PLUGINCLASS(core); \
	} \
	return m_inst; \
}

#endif // SDK_IPLUGIN_H
