#ifndef SDKSETTINGPAGE_H
#define SDKSETTINGPAGE_H

#include <QtGui/QWidget>

namespace KittySDK
{
  class PluginCore;

  class SettingPage: public QWidget
  {
    Q_OBJECT
    Q_PROPERTY(QString name READ name WRITE setName)
    Q_PROPERTY(QString icon READ icon WRITE setIcon)

    public:
      SettingPage(PluginCore *core, QWidget *parent = 0): QWidget(parent), m_core(core) { }

      QString name() { return m_name; }
      void setName(const QString &name) { m_name = name; }

      QString icon() { return m_icon; }
      void setIcon(const QString &icon) { m_icon = icon; }

      virtual void apply() { }
      virtual void reset() { }

    private:
      PluginCore *m_core;
      QString m_name;
      QString m_icon;
  };
}

#endif // SDKSETTINGPAGE_H
