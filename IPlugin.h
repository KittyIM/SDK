#ifndef SDK_IPLUGIN_H
#define SDK_IPLUGIN_H

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
			IPluginInfo(const QString &name = "", const QString &version = "", const QString &author = "", const QString &email = "", const QString &www = ""):
				m_name(name),
				m_version(version),
				m_author(author),
				m_email(email),
				m_www(www)
			{ }

			QString name() const { return m_name; }
			void setName(const QString &name) { m_name = name; }

			QString version() const { return m_version; }
			void setVersion(const QString &version) { m_version = version; }

			QString author() const { return m_author; }
			void setAuthor(const QString &author) { m_author = author; }

			QString email() const { return m_email; }
			void setEmail(const QString &email) { m_email = email; }

			QString www() const { return m_www; }
			void setWWW(const QString &www) { m_www = www; }

		private:
			QString m_name;
			QString m_version;
			QString m_author;
			QString m_email;
			QString m_www;
	};

	class IPlugin: public QObject
	{
		Q_OBJECT

		public:
			IPlugin(IPluginCore *core): QObject(0), m_info(0), m_core(core) { }

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
			virtual void execAction(const QString &name, const QMap<QString, QVariant> &args) { }

		protected:
			IPluginInfo *m_info;
			IPluginCore *m_core;
	};
}

#define KITTY_PLUGIN(PLUGINCLASS) \
	Q_EXTERN_C Q_DECL_EXPORT QObject *inst(KittySDK::IPluginCore *core) \
{ \
	static QPointer<QObject> m_inst; \
	if(!m_inst) { \
	m_inst = new PLUGINCLASS(core); \
	} \
	return m_inst; \
	}

#endif // SDK_IPLUGIN_H
