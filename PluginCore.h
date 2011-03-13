#ifndef SDKPLUGINCORE_H
#define SDKPLUGINCORE_H

#include <QtCore/QVariant>
#include <QtCore/QObject>

class QString;

namespace KittySDK
{
  class PluginCore: public QObject
  {
    Q_OBJECT

    public:
      QVariant setting(const QString &key, const QVariant &defaultValue = QVariant());
      void setSetting(const QString &key, const QVariant &value);
  };
}

#endif // SDKPLUGINCORE_H
