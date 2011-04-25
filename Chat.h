#ifndef SDKCHAT_H
#define SDKCHAT_H

#include "Account.h"

#include <QtCore/QObject>

namespace KittySDK
{
  class Protocol;
  class Contact;
  class Message;

  class Chat: public QObject
  {
    Q_OBJECT

    public:
      Chat(Account *account, const QList<Contact*> &contacts): QObject(account), m_account(account), m_contacts(contacts) { }

      Account *account() const { return m_account; }
      Protocol *protocol() const { return m_account->protocol(); }

      const QList<Contact*> &contacts() const { return m_contacts; }

    private:
      Account *m_account;
      QList<Contact*> m_contacts;
  };
}

#endif // SDKCHAT_H
