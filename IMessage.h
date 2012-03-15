#ifndef SDK_IMESSAGE_H
#define SDK_IMESSAGE_H

#include <QtCore/QDateTime>
#include <QtCore/QObject>

namespace KittySDK
{
	class IContact;
	class IChat;

	class IMessage
	{
		public:
			enum Direction
			{
				Incoming = 0,
				Outgoing,
				System
			};

		public:
			IMessage(IContact *from, IContact *to, const QString &body = QString(), const QDateTime &timeStamp = QDateTime::currentDateTime(), const Direction &dir = Outgoing):
				m_from(from),
				m_to(QList<IContact*>() << to),
				m_chat(0),
				m_body(body),
				m_timeStamp(timeStamp),
				m_direction(dir)
			{ }

			IMessage(IContact *from, const QList<IContact*> &to, const QString &body = QString(), const QDateTime &timeStamp = QDateTime::currentDateTime(), const Direction &dir = Outgoing):
				m_from(from),
				m_to(to),
				m_chat(0),
				m_body(body),
				m_timeStamp(timeStamp),
				m_direction(dir)
			{ }

			IContact *from() const { return m_from; }
			const QList<IContact*> &to() const { return m_to; }
			IContact *singleTo() const { return m_to.first(); }

			IChat *chat() const { return m_chat; }
			void setChat(IChat *chat) { m_chat = chat; }

			QString body() const { return m_body; }
			void setBody(const QString &body) { m_body = body; }

			QDateTime timeStamp() const { return m_timeStamp; }
			void setTimeStamp(const QDateTime &timeStamp) { m_timeStamp = timeStamp; }

			Direction direction() const { return m_direction; }
			void setDirection(const Direction &dir) { m_direction = dir; }

		private:
			IContact *m_from;
			QList<IContact*> m_to;
			IChat *m_chat;
			QString m_body;
			QDateTime m_timeStamp;
			Direction m_direction;
	};
}

#endif // SDK_IMESSAGE_H
