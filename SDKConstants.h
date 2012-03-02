#ifndef SDKCONSTANTS_H
#define SDKCONSTANTS_H

#define KITTYSDK_VERSION "1"

namespace KittySDK
{
	namespace Icons
	{
		const char I_KITTY[]				= "Kitty.Icon";
		const char I_QUIT[]					= "Kitty.Quit";
		const char I_SETTINGS[]				= "Kitty.Settings";
		const char I_PLUGIN[]				= "Kitty.Plugin";
		const char I_INFO[]					= "Kitty.Info";
		const char I_PROFILE[]				= "Kitty.Profile";
		const char I_USER[]					= "Kitty.User";
		const char I_FOLDER[]				= "Kitty.Folder";
		const char I_FOLDER_KITTY[]			= "Kitty.KittyFolder";
		const char I_REFRESH[]				= "Kitty.Refresh";
		const char I_CONSOLE[]				= "Kitty.Console";
		const char I_BULLET[]				= "Kitty.Bullet";
		const char I_CONNECT[]				= "Kitty.Connect";
		const char I_HISTORY[]				= "Kitty.History";
		const char I_KEY[]					= "Kitty.Key";
		const char I_PALETTE[]				= "Kitty.Palette";
		const char I_MESSAGE[]				= "Kitty.Message";
		const char I_SMILEY[]				= "Kitty.Smiley";
		const char I_TAB[]					= "Kitty.Tab";
		const char I_BOLD[]					= "Kitty.Bold";
		const char I_ITALIC[]				= "Kitty.Italic";
		const char I_UNDERLINE[]			= "Kitty.Underline";
		const char I_STRIKETHROUGH[]		= "Kitty.Striketrough";
		const char I_COLOR[]				= "Kitty.Color";
		const char I_IMAGE[]				= "Kitty.Image";
		const char I_FILE[]					= "Kitty.File";
		const char I_BLOCK[]				= "Kitty.Block";
		const char I_DELETE[]				= "Kitty.Delete";
		const char I_COPY[]					= "Kitty.Copy";
		const char I_GROUP[]				= "Kitty.Group";
		const char I_SOUND[]				= "Kitty.Sound";
		const char I_PRINTER[]				= "Kitty.Printer";
		const char I_FILTER[]				= "Kitty.Filter";
		const char I_SEARCH[]				= "Kitty.Search";
		const char I_ADD[]					= "Kitty.Add";
		const char I_EDIT[]					= "Kitty.Edit";
		const char I_URL[]					= "Kitty.URL";
		const char I_CURSOR[]				= "Kitty.Cursor";
		const char I_PAINTBRUSH[]			= "Kitty.Paintbrush";
		const char I_ERASE[]				= "Kitty.Erase";
		const char I_TYPING_ON[]			= "Kitty.TypingOn";
		const char I_TYPING_OFF[]			= "Kitty.TypingOff";
		const char I_GROUP_CHAT[]			= "Kitty.GroupChat";
		const char I_BLANK[]				= "Kitty.Blank";
		const char I_STATUS_ONLINE[]		= "Kitty.StatusOnline";
		const char I_STATUS_AWAY[]			= "Kitty.StatusAway";
		const char I_STATUS_FFC[]			= "Kitty.StatusFFC";
		const char I_STATUS_DND[]			= "Kitty.StatusDND";
		const char I_STATUS_INVIS[]			= "Kitty.StatusInvisible";
		const char I_STATUS_OFFLINE[]		= "Kitty.StatusOffline";

	}

	namespace Actions
	{
		const char A_QUIT[]					= "Kitty.Quit";
		const char A_SHOW_HIDE[]			= "Kitty.ShowHide";
		const char A_SETTINGS[]				= "Kitty.Settings";
		const char A_RESTART[]				= "Kitty.Restart";
		const char A_KITTY_FOLDER[]			= "Kitty.KittyFolder";
		const char A_PROFILE_FOLDER[]		= "Kitty.ProfileFolder";
		const char A_ABOUT[]				= "Kitty.About";
		const char A_DEBUG[]				= "Kitty.Debug";
		const char A_PLUGINS[]				= "Kitty.Plugins";
		const char A_ADD_CONTACT[]			= "Kitty.AddContact";
		const char A_HISTORY[]				= "Kitty.History";
		const char A_CHANGE_PROFILE[]		= "Kitty.ChangeProfile";
	}

	namespace Settings
	{
		const char S_LANGUAGE[]							= "Kitty.Language";

		const char S_MAINWINDOW_TRANSPARENCY[]			= "Kitty.MainWindow.Transparency.Enabled";
		const char S_MAINWINDOW_TRANSPARENCY_VALUE[]	= "Kitty.MainWindow.Transparency.Value";
		const char S_MAINWINDOW_GEOMETRY[]				= "Kitty.Geometries.MainWindow";
		const char S_MAINWINDOW_STATE[]					= "Kitty.MainWindow.State";
		const char S_MAINWINDOW_TB_LOCKS[]				= "Kitty.MainWindow.ToolBarLocks";
		const char S_MAINWINDOW_TB_STYLES[]				= "Kitty.MainWindow.ToolBarStyles";
		const char S_MAINWINDOW_STARTHIDDEN[]			= "Kitty.MainWindow.StartHidden";
		const char S_MAINWINDOW_CAPTION	[]				= "Kitty.Display.Captions.MainWindow";
		const char S_MAINWINDOW_ALWAYS_ON_TOP[]			= "Kitty.MainWindow.AlwaysOnTop";
		const char S_MAINWINDOW_AUTOHIDE[]				= "Kitty.MainWindow.AutoHide.Enabled";
		const char S_MAINWINDOW_AUTOHIDE_DELAY[]		= "Kitty.MainWindow.AutoHide.Delay";
		const char S_MAINWINDOW_DOCKING	[]				= "Kitty.MainWindow.Docking.Enabled";
		const char S_MAINWINDOW_DOCKING_DISTANCE[]		= "Kitty.MainWindow.Docking.Distance";

		const char S_DEBUGWINDOW_GEOMETRY[]				= "Kitty.Geometries.DebugWindow";
		const char S_CONTACTWINDOW_GEOMETRY[]			= "Kitty.Geometries.ContactWindow";

		const char S_SETTINGSWINDOW_GEOMETRY[]			= "Kitty.Geometries.SettingsWindow";

		const char S_CHATWINDOW_CAPTION	[]				= "Kitty.Display.Captions.ChatWindow";
		const char S_CHATWINDOW_GEOMETRY[]				= "Kitty.Geometries.ChatWindow";
		const char S_CHATWINDOW_GROUPING[]				= "Kitty.ChatWindow.Grouping";
		const char S_CHATWINDOW_SENTHISTORY[]			= "Kitty.ChatWindow.SentHistory";
		const char S_CHATWINDOW_COPYSELECTION[]			= "Kitty.ChatWindow.CopySelection";
		const char S_CHATWINDOW_STATUS_CHANGES[]		= "Kitty.ChatWindow.StatusChanges";
		const char S_CHATWINDOW_YOUTUBE_LINKS[]			= "Kitty.ChatWindow.YouTubeLinks";
		const char S_CHATWINDOW_FORMATTING[]			= "Kitty.ChatWindow.Formatting";
		const char S_CHATWINDOW_UNDERLINE_LINKS[]		= "Kitty.ChatWindow.UnderlineLinks";

		const char S_CHATWINDOW_TOOLBAR_POS[]			= "Kitty.ChatWindow.ToolBar.Position";
		const char S_CHATWINDOW_MIN_EDIT_HEIGHT[]		= "Kitty.ChatWindow.Edit.MinHeight";

		const char S_CHATWINDOW_CLEAR_MESSAGES[]		= "Kitty.ChatWindow.Clear.Messages";
		const char S_CHATWINDOW_CLEAR_INTERVAL[]		= "Kitty.ChatWindow.Clear.Interval";

		const char S_CHATWINDOW_SPELLCHECK_ENABLED[]	= "Kitty.ChatWindow.SpellCheck.Enabled";
		const char S_CHATWINDOW_SPELLCHECK_DICT[]		= "Kitty.ChatWindow.SpellCheck.Dictionary";
		const char S_CHATWINDOW_SPELLCHECK_SUGGESTIONS[]= "Kitty.ChatWindow.SpellCheck.Suggestions";

		const char S_CHATEDIT_FONT_FAMILY[]				= "Kitty.ChatEdit.Font.Family";
		const char S_CHATEDIT_FONT_SIZE[]				= "Kitty.ChatEdit.Font.Size";
		const char S_CHATEDIT_FONT_ANTIALIASING[]		= "Kitty.ChatEdit.Font.AntiAliasing";

		const char S_CHATWINDOW_TABBAR_HIDE_ONE[]		= "Kitty.ChatWindow.TabBar.HideIfOneTab";
		const char S_CHATWINDOW_TABBAR_CLOSE_WND[]		= "Kitty.ChatWindow.TabBar.CloseWithWnd";
		const char S_CHATWINDOW_TABBAR_FKEYS[]			= "Kitty.ChatWindow.TabBar.UseFKeys";
		const char S_CHATWINDOW_TABBAR_POS[]			= "Kitty.ChatWindow.TabBar.Position";

		const char S_CHATTAB_CAPTION[]					= "Kitty.Display.Captions.ChatTab";

		const char S_PROFILE_PASSWORD[]					= "Profile.Password";

		const char S_HISTORYWINDOW_GEOMETRY[]			= "Kitty.HistoryWindow.Geometry";
		const char S_HISTORYWINDOW_SPLITTER[]			= "Kitty.HistoryWindow.Splitter";
		const char S_HISTORYWINDOW_COLUMNS[]			= "Kitty.HistoryWindow.Columns";
		const char S_HISTORYWINDOW_FILTERS[]			= "Kitty.HistoryWindow.Filters";

		const char S_ICON_THEME[]						= "Profile.Themes.Icon";
		const char S_CHAT_THEME[]						= "Profile.Themes.Chat.Name";
		const char S_CHAT_THEME_VARIANT[]				= "Profile.Themes.Chat.Variant";

		const char S_PROXY_ENABLED[]					= "Kitty.Proxy.Enabled";
		const char S_PROXY_SERVER[]						= "Kitty.Proxy.Server";
		const char S_PROXY_PORT[]						= "Kitty.Proxy.Port";
		const char S_PROXY_AUTH[]						= "Kitty.Proxy.Auth.Enabled";
		const char S_PROXY_USERNAME[]					= "Kitty.Proxy.Auth.Username";
		const char S_PROXY_PASSWORD[]					= "Kitty.Proxy.Auth.Password";

		const char S_HISTORY_ENABLED[]					= "Kitty.History.Enabled";
		const char S_HISTORY_STRANGERS[]				= "Kitty.History.Strangers";
		const char S_HISTORY_EXPIRE_DAYS[]				= "Kitty.History.ExpireDays";
		const char S_HISTORY_UNDERLINE_LINKS[]			= "Kitty.History.UnderlineLinks";
		const char S_HISTORY_FORMATTING	[]				= "Kitty.History.Formatting";

		const char S_ROSTER_THEME[]						= "Profile.Themes.Roster";
		const char S_ROSTER_STATUS_DESCRIPTION[]		= "Kitty.Roster.StatusDescription";
		const char S_ROSTER_AVATARS[]					= "Kitty.Roster.Avatars";
		const char S_ROSTER_HIDE_OFFLINE[]				= "Kitty.Roster.HideOffline";
		const char S_ROSTER_GROUPS_AS_TABS[]			= "Kitty.Roster.GroupsAsTabs";
		const char S_ROSTER_GROUPS_ON_MAIN[]			= "Kitty.Roster.GroupsOnMain";
		const char S_ROSTER_TIPS[]						= "Kitty.Roster.Tips.Enabled";
		const char S_ROSTER_TIPS_IP[]					= "Kitty.Roster.Tips.IP";
		const char S_ROSTER_TIPS_EMAIL[]				= "Kitty.Roster.Tips.Email";
		const char S_ROSTER_TIPS_PHONE[]				= "Kitty.Roster.Tips.Phone";
		const char S_ROSTER_TIPS_DESCRIPTION[]			= "Kitty.Roster.Tips.Description";

		const char S_TRAYICON_PROTOCOL[]				= "Kitty.TrayIcon.Protocol";
		const char S_TRAYICON_ACCOUNT[]					= "Kitty.TrayIcon.Account";
		const char S_BLINKING_SPEED[]					= "Kitty.Blinking.Speed";

		//const char S_[]								= "Kitty.";
	}

	namespace SettingPages
	{
		const char S_SETTINGS[]						= "Settings";
		const char S_SETTINGS_STARTUP[]				= "Settings.Startup";
		const char S_SETTINGS_CONNECTION[]			= "Settings.Connection";
		const char S_USER[]							= "User";
		const char S_USER_ACCOUNTS[]				= "User.Accounts";
		const char S_DISPLAY[]						= "Display";
		const char S_DISPLAY_MAINWINDOW[]			= "Display.MainWindow";
		const char S_DISPLAY_THEMES[]				= "Display.Themes";
		const char S_DISPLAY_ROSTER[]				= "Display.Roster";
		const char S_DISPLAY_HISTORY[]				= "Display.History";
		const char S_DISPLAY_CHATWINDOW[]			= "Display.ChatWindow";
		const char S_DISPLAY_CHATWINDOW_EDIT[]		= "Display.ChatWindow.Edit";
		const char S_DISPLAY_CHATWINDOW_TABS[]		= "Display.ChatWindow.Tabs";
		const char S_DISPLAY_CHATWINDOW_SMILIES[]	= "Display.ChatWindow.Smilies";
		const char S_PLUGINS[]						= "Plugins";
	}

	namespace ContactInfos
	{
		const char I_NICKNAME[]				= "NickName";
		const char I_FIRSTNAME[]			= "FirstName";
		const char I_MIDDLENAME[]			= "MiddleName";
		const char I_LASTNAME[]				= "LastName";
		const char I_BIRTHDAY[]				= "Birthday";
		const char I_SEX[]					= "Sex";
		const char I_EMAILS[]				= "Emails";
		const char I_PHONES[]				= "Phones";
		const char I_HOME_ADDRESS[]			= "HomeAddress";
		const char I_HOME_CITY[]			= "HomeCity";
		const char I_HOME_POSTALCODE[]		= "HomePostalCode";
		const char I_HOME_STATE[]			= "HomeState";
		const char I_HOME_COUNTRY[]			= "HomeCountry";
		const char I_WORK_COMPANY[]			= "WorkCompany";
		const char I_WORK_POSITION[]		= "WorkPosition";
		const char I_WORK_ADDRESS[]			= "WorkAddress";
		const char I_WORK_CITY[]			= "WorkCity";
		const char I_WORK_POSTALCODE[]		= "WorkPostalCode";
		const char I_WORK_STATE[]			= "WorkState";
		const char I_WORK_COUNTRY[]			= "WorkCountry";
		const char I_WORK_WEBSITE[]			= "WorkWebsite";
		const char I_HOMEPAGE[]				= "Homepage";
		const char I_NOTES[]				= "Notes";
	}

	namespace Toolbars
	{
		const char TB_MAIN[]				= "Toolbars.Main";
		const char TB_NETWORKS[]			= "Toolbars.Networks";
		const char TB_PLUGINS[]				= "Toolbars.Plugins";
		const char TB_CHAT[]				= "Toolbars.Chat";
	}
}

#endif // SDKCONSTANTS_H
