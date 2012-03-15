#ifndef SDK_IPROTOCOL_H
#define SDK_IPROTOCOL_H

#include "IPlugin.h"

class QDialog;

namespace KittySDK
{
	class IProtocolInfo: public IPluginInfo
	{
		public:
			QString protoName() const { return m_protoName; }
			void setProtoName(const QString &protoName) { m_protoName = protoName; }

			QString protoIcon() const { return m_protoIcon; }
			void setProtoIcon(const QString &protoIcon) { m_protoIcon = protoIcon; }

		private:
			QString m_protoName;
			QString m_protoIcon;
	};

	class IProtocol: public IPlugin
	{
		Q_OBJECT

		public:
			enum Status
			{
				Online = 1,
				Away,
				FFC,
				DND,
				Invisible,
				Offline
			};

			enum Ability
			{
				TextBold			= 0x01,
				TextItalics			= 0x02,
				TextUnderline		= 0x04,
				TextStrikethrough	= 0x08,

				TextColor			= 0x10,
				BackgroundColor		= 0x20,

				SendImages			= 0x100,
				SendFiles			= 0x200,

				ChangeStatus		= 0x1000,
				BlockContacts		= 0x2000,
				TypingNotification	= 0x4000,

				TextStandard		= TextBold | TextItalics | TextUnderline
			};
			Q_DECLARE_FLAGS(Abilities, Ability)

		public:
			IProtocol(IPluginCore *core):
				IPlugin(core)
			{ }

			IProtocolInfo *protoInfo() const { return static_cast<IProtocolInfo*>(m_info); }

			Abilities abilities() const { return m_abilities; }
			void setAbilities(const Abilities &abilities) { m_abilities = abilities; }

			virtual QString statusIcon(IProtocol::Status status) { return ""; }
			virtual IAccount *newAccount(const QString &uid) = 0;
			virtual QDialog *editDialog(IAccount *account = 0) = 0;

			enum { Type = 2 };
			int type() const { return Type; }

		protected:
			Abilities m_abilities;
	};

	Q_DECLARE_OPERATORS_FOR_FLAGS(IProtocol::Abilities)
}

#endif // SDK_IPROTOCOL_H
