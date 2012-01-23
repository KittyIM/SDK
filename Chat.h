#ifndef SDKCHAT_H
#define SDKCHAT_H

#include "Contact.h"

#include <QtCore/QObject>

namespace KittySDK
{
	class Protocol;
	class Message;

	class Chat: public QObject
	{
		Q_OBJECT

		public:
			Chat(Contact *me, const QList<Contact*> &contacts, const int &id = 0): QObject(me), m_me(me), m_contacts(contacts), m_id(id) { }

			Contact *me() const { return m_me; }
			Account *account() const { return m_me->account(); }
			Protocol *protocol() const { return account()->protocol(); }
			int id() const { return m_id; }

			const QList<Contact*> &contacts() const { return m_contacts; }

		private:
			Contact *m_me;
			QList<Contact*> m_contacts;
			int m_id;
	};
}

#endif // SDKCHAT_H
