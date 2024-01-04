#ifndef WINDOW_MESSAGE_MAPPING_H
#define WINDOW_MESSAGE_MAPPING_H

// NOTE: use C++17 or later for inline declaration. If you are from C change
// the declaration.

// lookup table for the names of all WM_ macros in win32
// WARNING: neither confirmed nor tested
inline const char *win32NameLookupTableForWM[] = {
    "WM_NULL",
    "WM_CREATE",
    "WM_DESTROY",
    "WM_MOVE",
    "", // 0x4
    "WM_SIZE",
    "WM_ACTIVATE",
    "WM_SETFOCUS",
    "WM_KILLFOCUS",
    "", // 0x9
    "WM_ENABLE",
    "WM_SETREDRAW",
    "WM_SETTEXT",
    "WM_GETTEXT",
    "WM_GETTEXTLENGTH",
    "WM_PAINT",
    "WM_CLOSE",
    "WM_QUERYENDSESSION",
    "WM_QUIT",
    "WM_QUERYOPEN",
    "WM_ERASEBKGND",
    "WM_SYSCOLORCHANGE",
    "WM_ENDSESSION",
    "", // 0x17
    "WM_SHOWWINDOW",
    "", // 0x19
    "WM_WININICHANGE",
    "WM_DEVMODECHANGE",
    "WM_ACTIVATEAPP",
    "WM_FONTCHANGE",
    "WM_TIMECHANGE",
    "WM_CANCELMODE",
    "WM_SETCURSOR",
    "WM_MOUSEACTIVATE",
    "WM_CHILDACTIVATE",
    "WM_QUEUESYNC",
    "WM_GETMINMAXINFO",
    "", // 0x25
    "WM_PAINTICON",
    "WM_ICONERASEBKGND",
    "WM_NEXTDLGCTL",
    "", // 0x29
    "WM_SPOOLERSTATUS",
    "WM_DRAWITEM",
    "WM_MEASUREITEM",
    "WM_DELETEITEM",
    "WM_VKEYTOITEM",
    "WM_CHARTOITEM",
    "WM_SETFONT",
    "WM_GETFONT",
    "WM_SETHOTKEY",
    "WM_GETHOTKEY",
    "", // 0x34
    "", // 0x35
    "", // 0x36
    "WM_QUERYDRAGICON",
    "", // 0x38
    "WM_COMPAREITEM",
    "", // 0x3A
    "", // 0x3B
    "", // 0x3C
    "WM_GETOBJECT",
    "", // 0x3E
    "", // 0x3F
    "", // 0x40
    "WM_COMPACTING",
    "", // 0x42
    "", // 0x43
    "WM_COMMNOTIFY",
    "", // 0x45
    "WM_WINDOWPOSCHANGING",
    "WM_WINDOWPOSCHANGED",
    "WM_POWER",
    "", // 0x49
    "WM_COPYDATA",
    "WM_CANCELJOURNAL",
    "", // 0x4C
    "", // 0x4D
    "WM_NOTIFY",
    "WM_INPUTLANGCHANGEREQUEST",
    "WM_INPUTLANGCHANGE",
    "WM_TCARD",
    "WM_HELP",
    "WM_USERCHANGED",
    "WM_NOTIFYFORMAT",
    "", // 0x56
    "", // 0x57
    "", // 0x58
    "", // 0x59
    "", // 0x5A
    "", // 0x5B
    "", // 0x5C
    "", // 0x5D
    "", // 0x5E
    "", // 0x5F
    "", // 0x60
    "", // 0x61
    "", // 0x62
    "", // 0x63
    "", // 0x64
    "", // 0x65
    "", // 0x66
    "", // 0x67
    "", // 0x68
    "", // 0x69
    "", // 0x6A
    "", // 0x6B
    "", // 0x6C
    "", // 0x6D
    "", // 0x6E
    "", // 0x6F
    "", // 0x70
    "", // 0x71
    "", // 0x72
    "", // 0x73
    "", // 0x74
    "", // 0x75
    "", // 0x76
    "", // 0x77
    "", // 0x78
    "", // 0x79
    "", // 0x7A
    "WM_CONTEXTMENU",
    "WM_STYLECHANGING",
    "WM_STYLECHANGED",
    "WM_DISPLAYCHANGE",
    "WM_GETICON",
    "WM_SETICON",
    "WM_NCCREATE",
    "WM_NCDESTROY",
    "WM_NCCALCSIZE",
    "WM_NCHITTEST",
    "WM_NCPAINT",
    "WM_NCACTIVATE",
    "WM_GETDLGCODE",
    "WM_SYNCPAINT",
    "", // 0x89
    "", // 0x8A
    "", // 0x8B
    "", // 0x8C
    "", // 0x8D
    "", // 0x8E
    "", // 0x8F
    "", // 0x90
    "", // 0x91
    "", // 0x92
    "", // 0x93
    "", // 0x94
    "", // 0x95
    "", // 0x96
    "", // 0x97
    "", // 0x98
    "", // 0x99
    "", // 0x9A
    "", // 0x9B
    "", // 0x9C
    "", // 0x9D
    "", // 0x9E
    "", // 0x9F
    "WM_NCMOUSEMOVE",
    "WM_NCLBUTTONDOWN",
    "WM_NCLBUTTONUP",
    "WM_NCLBUTTONDBLCLK",
    "WM_NCRBUTTONDOWN",
    "WM_NCRBUTTONUP",
    "WM_NCRBUTTONDBLCLK",
    "WM_NCMBUTTONDOWN",
    "WM_NCMBUTTONUP",
    "WM_NCMBUTTONDBLCLK",
    "", // 0xAA
    "WM_NCXBUTTONDOWN",
    "WM_NCXBUTTONUP",
    "WM_NCXBUTTONDBLCLK",
    "", // 0xAE
    "", // 0xAF
    "", // 0xB0
    "", // 0xB1
    "", // 0xB2
    "", // 0xB3
    "", // 0xB4
    "", // 0xB5
    "", // 0xB6
    "", // 0xB7
    "", // 0xB8
    "", // 0xB9
    "", // 0xBA
    "", // 0xBB
    "", // 0xBC
    "", // 0xBD
    "", // 0xBE
    "", // 0xBF
    "", // 0xC0
    "", // 0xC1
    "", // 0xC2
    "", // 0xC3
    "", // 0xC4
    "", // 0xC5
    "", // 0xC6
    "", // 0xC7
    "", // 0xC8
    "", // 0xC9
    "", // 0xCA
    "", // 0xCB
    "", // 0xCC
    "", // 0xCD
    "", // 0xCE
    "", // 0xCF
    "", // 0xD0
    "", // 0xD1
    "", // 0xD2
    "", // 0xD3
    "", // 0xD4
    "", // 0xD5
    "", // 0xD6
    "", // 0xD7
    "", // 0xD8
    "", // 0xD9
    "", // 0xDA
    "", // 0xDB
    "", // 0xDC
    "", // 0xDD
    "", // 0xDE
    "", // 0xDF
    "", // 0xE0
    "", // 0xE1
    "", // 0xE2
    "", // 0xE3
    "", // 0xE4
    "", // 0xE5
    "", // 0xE6
    "", // 0xE7
    "", // 0xE8
    "", // 0xE9
    "", // 0xEA
    "", // 0xEB
    "", // 0xEC
    "", // 0xED
    "", // 0xEE
    "", // 0xEF
    "", // 0xF0
    "", // 0xF1
    "", // 0xF2
    "", // 0xF3
    "", // 0xF4
    "", // 0xF5
    "", // 0xF6
    "", // 0xF7
    "", // 0xF8
    "", // 0xF9
    "", // 0xFA
    "", // 0xFB
    "", // 0xFC
    "", // 0xFD
    "WM_INPUT_DEVICE_CHANGE",
    "WM_INPUT",
    "WM_KEYFIRST / ,WM_KEYDOWN",
    "WM_KEYUP",
    "WM_CHAR",
    "WM_DEADCHAR",
    "WM_SYSKEYDOWN",
    "WM_SYSKEYUP",
    "WM_SYSCHAR",
    "WM_SYSDEADCHAR",
    "", // 0x108
    "WM_UNICHAR / ,WM_KEYLAST"
    "", // 0x10A
    "", // 0x10B
    "", // 0x10C
    "WM_IME_STARTCOMPOSITION",
    "WM_IME_ENDCOMPOSITION",
    "WM_IME_COMPOSITION / WM_IME_KEYLAST",
    "WM_INITDIALOG",
    "WM_COMMAND",
    "WM_SYSCOMMAND",
    "WM_TIMER",
    "WM_HSCROLL",
    "WM_VSCROLL",
    "WM_INITMENU",
    "WM_INITMENUPOPUP",
    "", // 0x118
    "WM_GESTURE",
    "WM_GESTURENOTIFY",
    "", // 0x11B
    "", // 0x11C
    "", // 0x11D
    "", // 0x11E
    "WM_MENUSELECT",
    "WM_MENUCHAR",
    "WM_ENTERIDLE",
    "WM_MENURBUTTONUP",
    "WM_MENUDRAG",
    "WM_MENUGETOBJECT",
    "WM_UNINITMENUPOPUP",
    "WM_MENUCOMMAND",
    "WM_CHANGEUISTATE",
    "WM_UPDATEUISTATE",
    "WM_QUERYUISTATE",
    "", // 0x12A
    "", // 0x12B
    "", // 0x12C
    "", // 0x12E
    "", // 0x12F
    "", // 0x130
    "", // 0x131
    "WM_CTLCOLORMSGBOX",
    "WM_CTLCOLOREDIT",
    "WM_CTLCOLORLISTBOX",
    "WM_CTLCOLORBTN",
    "WM_CTLCOLORDLG",
    "WM_CTLCOLORSCROLLBAR",
    "WM_CTLCOLORSTATIC",
    "", // 200 entries for [0x139 to 0x1FF] inclusive
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "WM_MOUSEFIRST / WM_MOUSEMOVE", // 0x200
    "WM_LBUTTONDOWN",
    "WM_LBUTTONUP",
    "WM_LBUTTONDBLCLK",
    "WM_RBUTTONDOWN",
    "WM_RBUTTONUP",
    "WM_RBUTTONDBLCLK",
    "WM_MBUTTONDOWN",
    "WM_MBUTTONUP",
    "WM_MBUTTONDBLCLK",
    "WM_MOUSEWHEEL",
    "WM_XBUTTONDOWN",
    "WM_XBUTTONUP",
    "WM_XBUTTONDBLCLK",
    "WM_MOUSEHWHEEL",
    "", // 0x20F
    "WM_PARENTNOTIFY"
    "WM_ENTERMENULOOP",
    "WM_EXITMENULOOP",
    "WM_NEXTMENU",
    "WM_SIZING",
    "WM_CAPTURECHANGED",
    "WM_MOVING",
    "", // 0x217
    "WM_POWERBROADCAST",
    "WM_DEVICECHANGE",
    "", // 0x21A
    "", // 0x21B
    "", // 0x21C
    "", // 0x21D
    "", // 0x21E
    "", // 0x21F
    "WM_MDICREATE",
    "WM_MDIDESTROY",
    "WM_MDIACTIVATE",
    "WM_MDIRESTORE",
    "WM_MDINEXT",
    "WM_MDIMAXIMIZE",
    "WM_MDITILE",
    "WM_MDICASCADE",
    "WM_MDIICONARRANGE",
    "WM_MDIGETACTIVE",
    "", // 0x22A
    "", // 0x22B
    "", // 0x22C
    "", // 0x22D
    "", // 0x22E
    "", // 0x22F
    "WM_MDISETMENU",
    "WM_ENTERSIZEMOVE",
    "WM_EXITSIZEMOVE",
    "WM_DROPFILES",
    "WM_MDIREFRESHMENU",
    "", // 0x235
    "", // 0x236
    "", // 0x237
    "WM_POINTERDEVICECHANGE",
    "WM_POINTERDEVICEINRANGE",
    "WM_POINTERDEVICEOUTOFRANGE",
    "", // 0x23B
    "", // 0x23C
    "", // 0x23D
    "", // 0x23E
    "", // 0x23F
    "WM_TOUCH",
    "WM_NCPOINTERUPDATE",
    "WM_NCPOINTERDOWN",
    "WM_NCPOINTERUP",
    "", // 0x244
    "WM_POINTERUPDATE",
    "WM_POINTERDOWN",
    "WM_POINTERUP",
    "", // 0x248
    "WM_POINTERENTER",
    "WM_POINTERLEAVE",
    "WM_POINTERACTIVATE",
    "WM_POINTERCAPTURECHANGED",
    "WM_TOUCHHITTESTING",
    "WM_POINTERWHEEL",
    "WM_POINTERHWHEEL",
    "DM_POINTERHITTEST",
    "WM_POINTERROUTEDTO",
    "WM_POINTERROUTEDAWAY",
    "WM_POINTERROUTEDRELEASED",
    "", // 45 entries for [0x254 to 0x280] inclusive
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "WM_IME_SETCONTEXT", // 0x281
    "WM_IME_NOTIFY",
    "WM_IME_CONTROL",
    "WM_IME_COMPOSITIONFULL",
    "WM_IME_SELECT",
    "WM_IME_CHAR",
    "", // 0x287
    "WM_IME_REQUEST",
    "", // 0x289
    "", // 0x28A
    "", // 0x28B
    "", // 0x28C
    "", // 0x28D
    "", // 0x28E
    "", // 0x28F
    "WM_IME_KEYDOWN",
    "WM_IME_KEYUP",
    "", // 0x292
    "", // 0x293
    "", // 0x294
    "", // 0x295
    "", // 0x296
    "", // 0x297
    "", // 0x298
    "", // 0x299
    "", // 0x29A
    "", // 0x29B
    "", // 0x29C
    "", // 0x29D
    "", // 0x29E
    "", // 0x29F
    "WM_NCMOUSEHOVER",
    "WM_MOUSEHOVER",
    "WM_NCMOUSELEAVE",
    "WM_MOUSELEAVE",
    "", // 0x2A4
    "", // 0x2A5
    "", // 0x2A6
    "", // 0x2A7
    "", // 0x2A8
    "", // 0x2A9
    "", // 0x2AA
    "", // 0x2AB
    "", // 0x2AC
    "", // 0x2AD
    "", // 0x2AE
    "", // 0x2AF
    "", // 0x2B0
    "WM_WTSSESSION_CHANGE",
    "", // 0x2B2
    "", // 0x2B3
    "", // 0x2B4
    "", // 0x2B5
    "", // 0x2B6
    "", // 0x2B7
    "", // 0x2B8
    "", // 0x2B9
    "", // 0x2BA
    "", // 0x2BB
    "", // 0x2BC
    "", // 0x2BD
    "", // 0x2BE
    "", // 0x2BF
    "", // 0x2C0
    "", // 0x2C1
    "", // 0x2C2
    "", // 0x2C3
    "", // 0x2C4
    "", // 0x2C5
    "", // 0x2C6
    "", // 0x2C7
    "", // 0x2C8
    "", // 0x2C9
    "", // 0x2CA
    "", // 0x2CB
    "", // 0x2CC
    "", // 0x2CD
    "", // 0x2CE
    "", // 0x2CF
    "", // 0x2D0
    "", // 0x2D1
    "", // 0x2D2
    "", // 0x2D3
    "", // 0x2D4
    "", // 0x2D5
    "", // 0x2D6
    "", // 0x2D7
    "", // 0x2D8
    "", // 0x2D9
    "", // 0x2DA
    "", // 0x2DB
    "", // 0x2DC
    "", // 0x2DD
    "", // 0x2DE
    "", // 0x2DF
    "WM_DPICHANGED",
    "", // 0x2E1
    "WM_DPICHANGED_BEFOREPARENT",
    "WM_DPICHANGED_AFTERPARENT",
    "WM_GETDPISCALEDSIZE",
    "", // 0x2E5
    "", // 0x2E6
    "", // 0x2E7
    "", // 0x2E8
    "", // 0x2E9
    "", // 0x2EA
    "", // 0x2EB
    "", // 0x2EC
    "", // 0x2ED
    "", // 0x2EE
    "", // 0x2EF
    "", // 0x2E0
    "", // 0x2E1
    "", // 0x2E2
    "", // 0x2E3
    "", // 0x2E4
    "", // 0x2E5
    "", // 0x2E6
    "", // 0x2E7
    "", // 0x2E8
    "", // 0x2E9
    "", // 0x2EA
    "", // 0x2EB
    "", // 0x2EC
    "", // 0x2ED
    "", // 0x2EE
    "", // 0x2EF
    "", // 0x2F0
    "", // 0x2F1
    "", // 0x2F2
    "", // 0x2F3
    "", // 0x2F4
    "", // 0x2F5
    "", // 0x2F6
    "", // 0x2F7
    "", // 0x2F8
    "", // 0x2F9
    "", // 0x2FA
    "", // 0x2FB
    "", // 0x2FC
    "", // 0x2FD
    "", // 0x2FE
    "", // 0x2FF
    "WM_CUT",
    "WM_COPY",
    "WM_PASTE",
    "WM_CLEAR",
    "WM_UNDO",
    "WM_RENDERFORMAT",
    "WM_RENDERALLFORMATS",
    "WM_DESTROYCLIPBOARD",
    "WM_DRAWCLIPBOARD",
    "WM_PAINTCLIPBOARD",
    "WM_VSCROLLCLIPBOARD",
    "WM_SIZECLIPBOARD",
    "WM_ASKCBFORMATNAME",
    "WM_CHANGECBCHAIN",
    "WM_HSCROLLCLIPBOARD",
    "WM_QUERYNEWPALETTE",
    "WM_PALETTEISCHANGING",
    "WM_PALETTECHANGED",
    "WM_HOTKEY",
    "", // 0x313
    "", // 0x314
    "", // 0x315
    "", // 0x316
    "WM_PRINT",
    "WM_PRINTCLIENT",
    "WM_APPCOMMAND",
    "WM_THEMECHANGED",
    "", // 0x31B
    "", // 0x31C
    "WM_CLIPBOARDUPDATE",
    "WM_DWMCOMPOSITIONCHANGED",
    "WM_DWMNCRENDERINGCHANGED",
    "WM_DWMCOLORIZATIONCOLORCHANGED",
    "WM_DWMWINDOWMAXIMIZEDCHANGE",
    "", // 0x322
    "WM_DWMSENDICONICTHUMBNAIL",
    "", // 0x324
    "", // 0x325
    "WM_DWMSENDICONICLIVEPREVIEWBITMAP",
    "", // 0x327
    "", // 0x328
    "", // 0x329
    "", // 0x32A
    "", // 0x32B
    "", // 0x32C
    "", // 0x32D
    "", // 0x32E
    "", // 0x32F
    "", // 0x330
    "", // 0x331
    "", // 0x332
    "", // 0x333
    "", // 0x334
    "", // 0x335
    "", // 0x336
    "", // 0x337
    "", // 0x338
    "", // 0x339
    "", // 0x33A
    "", // 0x33B
    "", // 0x33C
    "", // 0x33D
    "", // 0x33E
    "WM_GETTITLEBARINFOEX",
    "", // 0x340
    "", // 0x341
    "", // 0x342
    "", // 0x343
    "", // 0x344
    "", // 0x345
    "", // 0x346
    "", // 0x347
    "", // 0x348
    "", // 0x349
    "", // 0x34A
    "", // 0x34B
    "", // 0x34C
    "", // 0x34D
    "", // 0x34E
    "", // 0x34F
    "", // 0x350
    "", // 0x351
    "", // 0x352
    "", // 0x353
    "", // 0x354
    "", // 0x355
    "", // 0x356
    "", // 0x357
    "WM_HANDHELDFIRST",
    "", // 0x359
    "", // 0x35A
    "", // 0x35B
    "", // 0x35C
    "", // 0x35E
    "WM_HANDHELDLAST",
    "WM_AFXFIRST",
    "", // 0x361
    "", // 0x362
    "", // 0x363
    "", // 0x364
    "", // 0x365
    "", // 0x366
    "", // 0x367
    "", // 0x368
    "", // 0x369
    "", // 0x36A
    "", // 0x36B
    "", // 0x36C
    "", // 0x36D
    "", // 0x36E
    "", // 0x36F
    "", // 0x370
    "", // 0x371
    "", // 0x372
    "", // 0x373
    "", // 0x374
    "", // 0x375
    "", // 0x376
    "", // 0x377
    "", // 0x378
    "", // 0x379
    "", // 0x37A
    "", // 0x37B
    "", // 0x37C
    "", // 0x37D
    "", // 0x37E
    "WM_AFXLAST",
    "WM_PENWINFIRST",
    "", // 0x380
    "", // 0x381
    "", // 0x382
    "", // 0x383
    "", // 0x384
    "", // 0x385
    "", // 0x386
    "", // 0x387
    "", // 0x388
    "", // 0x389
    "", // 0x38A
    "", // 0x38B
    "", // 0x38C
    "", // 0x38D
    "", // 0x38E
    "WM_PENWINLAST",
};

#endif
