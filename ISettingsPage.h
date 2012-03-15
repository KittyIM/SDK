#ifndef SDK_ISETTINGSPAGE_H
#define SDK_ISETTINGSPAGE_H

#include <QtGui/QWidget>

namespace KittySDK
{
	class IPluginCore;

	class ISettingsPage: public QWidget
	{
		Q_OBJECT
		Q_PROPERTY(QString id READ id WRITE setId)
		Q_PROPERTY(QString icon READ icon WRITE setIcon)

		public:
			ISettingsPage(IPluginCore *core, QWidget *parent = 0):
				QWidget(parent),
				m_core(core)
			{ }

			IPluginCore *core() const { return m_core; }

			QString id() const { return m_id; }
			void setId(const QString &name) { m_id = name; }

			QString icon() const { return m_icon; }
			void setIcon(const QString &icon) { m_icon = icon; }

			virtual void retranslate() { }
			virtual void apply() { }
			virtual void reset() { }

		private:
			IPluginCore *m_core;
			QString m_id;
			QString m_icon;
	};
}

#endif // SDK_SETTINGSPAGE_H
