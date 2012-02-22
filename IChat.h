#ifndef SDK_ICHAT_H
#define SDK_ICHAT_H

#include "IContact.h"

#include <QtCore/QObject>

namespace KittySDK
{
	class IProtocol;
	class IMessage;

	class IChat: public QObject
	{
		Q_OBJECT

		public:
			IChat(IContact *me, const QList<IContact*> &contacts, const int &id = 0): QObject(me), m_me(me), m_contacts(contacts), m_id(id) { }

			IContact *me() const { return m_me; }
			IAccount *account() const { return m_me->account(); }
			IProtocol *protocol() const { return account()->protocol(); }
			int id() const { return m_id; }

			const QList<IContact*> &contacts() const { return m_contacts; }

		private:
			IContact *m_me;
			QList<IContact*> m_contacts;
			int m_id;
	};
}

#endif // SDK_ICHAT_H