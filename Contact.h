#ifndef SDKCONTACT_H
#define SDKCONTACT_H

#include "Account.h"

#include <QtCore/QString>

namespace KittySDK
{
  class Contact: public QObject
  {
    Q_OBJECT
    Q_PROPERTY(QString uid READ uid WRITE setUid)
    Q_PROPERTY(KittySDK::Protocol::Status status READ status WRITE setStatus)

    public:
      Contact(const QString &uid, KittySDK::Account *account): QObject(account), m_uid(uid), m_account(account) { }

      QString uid() const { return m_uid; }
      void setUid(const QString &uid) { m_uid = uid; }

      KittySDK::Protocol::Status status() const { return m_status; }
      void setStatus(KittySDK::Protocol::Status status) { m_status = status; }

      KittySDK::Account *account() const { return m_account; }

    private:
      QString m_uid;
      KittySDK::Protocol::Status m_status;
      KittySDK::Account *m_account;
  };
}

#endif // SDKCONTACT_H
