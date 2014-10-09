enum {
    LANG_BG,
    LANG_DE,
    LANG_EN,
    LANG_ES,
    LANG_FR,
    LANG_HI, //5
    LANG_JA,
    LANG_IT,
    LANG_LV,
    LANG_NL,
    LANG_NO, //10
    LANG_BR,
    LANG_PL,
    LANG_RO,
    LANG_RU,
    LANG_TR, //15
    LANG_UA,
    LANG_CN,
    LANG_TW,
    LANG_CS,
    //Do NOT add new values beyond this point, or alter LANGS_MAX accordingly.
    LANGS_MAX = LANG_CS
};

enum {
    //This ensures that all statically initialized to zero UI_STRING_ID vars
    //will render as canary "BUG. PLEASE REPORT." strings.
    UI_STRING_ID_INVALID = 0,

    STR_REQ_SENT,
    STR_REQ_RESOLVE,
    STR_REQ_INVALID_ID,
    STR_REQ_EMPTY_ID,
    STR_REQ_LONG_MSG,
    STR_REQ_NO_MSG,
    STR_REQ_SELF_ID,
    STR_REQ_ALREADY_FRIENDS,
    STR_REQ_UNKNOWN,
    STR_REQ_BAD_CHECKSUM,
    STR_REQ_BAD_NOSPAM,
    STR_REQ_NO_MEMORY,

    STR_TRANSFER_NEW,
    STR_TRANSFER_STARTED,
    STR_TRANSFER___,
    STR_TRANSFER_PAUSED,
    STR_TRANSFER_BROKEN,
    STR_TRANSFER_CANCELLED,
    STR_TRANSFER_COMPLETE,

    STR_CALL_CANCELLED,
    STR_CALL_INVITED,
    STR_CALL_RINGING,
    STR_CALL_STARTED,

    STR_ADDFRIENDS,
    STR_TOXID,
    STR_MESSAGE,
    STR_SEARCHFRIENDS,
    STR_ADD, STR_BUTTON_ADD_FRIEND = STR_ADD, STR_BUTTON_ACCEPT_FRIEND = STR_ADD,
    STR_SWITCHPROFILE,
    STR_FRIENDREQUEST,
    STR_USERSETTINGS,
    STR_NAME,
    STR_STATUSMESSAGE,
    STR_PREVIEW,
    STR_DEVICESELECTION,
    STR_AUDIOINPUTDEVICE,
    STR_AUDIOOUTPUTDEVICE,
    STR_VIDEOINPUTDEVICE,
    STR_OTHERSETTINGS,
    STR_DPI,
    STR_SAVELOCATION,
    STR_LANGUAGE,
    STR_NETWORK,
    STR_IPV6,
    STR_UDP,
    STR_PROXY,
    STR_WARNING,
    STR_LOGGING,
    STR_IS_TYPING,

    STR_COPY, STR_COPY_TOX_ID = STR_COPY,
    STR_COPYWITHOUTNAMES,
    STR_CUT,
    STR_PASTE,
    STR_DELETE,
    STR_SELECTALL,

    STR_REMOVE, STR_REMOVE_FRIEND = STR_REMOVE,
    STR_LEAVE, STR_REMOVE_GROUP = STR_LEAVE,
    STR_ACCEPT, STR_REQ_ACCEPT = STR_ACCEPT,
    STR_IGNORE, STR_REQ_DECLINE = STR_IGNORE,

    STR_CLICKTOSAVE,
    STR_CLICKTOOPEN,
    STR_CANCELLED,

    STR_DPI_TINY,
    STR_DPI_NORMAL,
    STR_DPI_BIG,
    STR_DPI_LARGE,
    STR_DPI_HUGE,

    STR_CONTACTS_FILTER_ALL,
    STR_CONTACTS_FILTER_ONLINE,

    STR_CONTACTS_FILTER_EDIT_HINT,

    STR_PROXY_DISABLED,
    STR_PROXY_FALLBACK,
    STR_PROXY_ALWAYS_USE,

    STR_PROXY_EDIT_HINT_IP,
    STR_PROXY_EDIT_HINT_PORT,

    STR_NO,
    STR_YES,

    STR_VIDEO_IN_NONE, STR_AUDIO_IN_NONE = STR_VIDEO_IN_NONE,
    STR_VIDEO_IN_DESKTOP,

    STR_AUDIO_IN_DEFAULT_LOOPBACK,

    STR_DEFAULT_FRIEND_REQUEST_MESSAGE,

    STR_WINDOW_TITLE_VIDEO_PREVIEW,

    STR_LANG_NATIVE_NAME,
    STR_LANG_ENGLISH_NAME,
    //Do NOT add new values beyond this point, or alter STRS_MAX accordingly.
    STRS_MAX = STR_LANG_ENGLISH_NAME
};

typedef uint8_t UI_LANG_ID;
typedef uint16_t UI_STRING_ID;

STRING* ui_gettext(UI_LANG_ID lang, UI_STRING_ID string_id);

UI_LANG_ID ui_guess_lang_by_posix_locale(const char* locale, UI_LANG_ID deflt);
UI_LANG_ID ui_guess_lang_by_windows_lang_id(uint16_t lang_id, UI_LANG_ID deflt);
