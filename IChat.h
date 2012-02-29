#ifndef SDK_ICHAT_H
#define SDK_ICHAT_H

#include "IContact.h"

#include <QtCore/QObject>

namespace KittySDK
{
	class IProtocol;
	class IMessage;

	class IChat
	{
		public:
			IChat(IContact *me, const QList<IContact*> &contacts, const QString &id = 0):
				m_me(me),
				m_contacts(contacts),
				m_id(id)
			{ }

			IContact *me() const { return m_me; }
			IAccount *account() const { return m_me->account(); }
			IProtocol *protocol() const { return account()->protocol(); }
			QString id() const { return m_id; }

			const QList<IContact*> &contacts() const { return m_contacts; }

		private:
			IContact *m_me;
			QList<IContact*> m_contacts;
			QString m_id;
	};
}

#endif // SDK_ICHAT_H
