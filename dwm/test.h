static Key keys[] = {
 /* Modifier      Key       Function  Argument */
 { 0,                  XF86XK_AudioLowerVolume,        spawn,          { .v = lower_volume } },
 { 0,                  XF86XK_AudioRaiseVolume,        spawn,          { .v = raise_volume } },
 { 0,                  XF86XK_AudioMute,               spawn,          { .v = mute_volume } },
 { MODKEY|ALTKEY,      XK_p,                           spawn,          { .v = change_audio } },
 { 0,                  XF86XK_AudioNext,               spawn,          { .v = mpc_next } },
 { 0,                  XF86XK_AudioPrev,               spawn,          { .v = mpc_prev } },
 { 0,                  XF86XK_AudioPlay,               spawn,          { .v = mpc_toggle } },
 { MODKEY,             XK_d,                           spawn,          { .v = dmenu_cmd } },
 { MODKEY,             XK_Return,                      spawn,          { .v = termcmd } },
 { MODKEY,             XK_j,                           focusstack,     { .i = +1 } },
 { MODKEY,             XK_k,                           focusstack,     { .i = -1 } },
 { MODKEY,             XK_i,                           incnmaster,     { .i = +1 } },
 { MODKEY,             XK_o,                           incnmaster,     { .i = -1 } },
 { MODKEY,             XK_h,                           setmfact,       { .f = -0.05} },
 { MODKEY,             XK_l,                           setmfact,       { .f = +0.05} },
 { MODKEY|ShiftMask,   XK_Return,                      zoom,           { 0 } },
 { MODKEY,             XK_Tab,                         view,           { 0 } },
 { MODKEY|ShiftMask,   XK_c,                           killclient,     { 0 } },
 { MODKEY,             XK_t,                           setlayout,      { .v = &layouts[0]} },
 { MODKEY,             XK_f,                           setlayout,      { .v = &layouts[1]} },
 { MODKEY,             XK_m,                           setlayout,      { .v = &layouts[2]} },
 { MODKEY,             XK_space,                       setlayout,      { 0 } },
 { MODKEY|ShiftMask,   XK_space,                       togglefloating, { 0 } },
 { MODKEY,             XK_0,                           view,           { .ui = ~0 } },
 { MODKEY|ShiftMask,   XK_0,                           tag,            { .ui = ~0 } },
 { MODKEY,             XK_comma,                       focusmon,       { .i = -1 } },
 { MODKEY,             XK_period,                      focusmon,       { .i = +1 } },
 { MODKEY|ShiftMask,   XK_comma,                       tagmon,         { .i = -1 } },
 { MODKEY|ShiftMask,   XK_period,                      tagmon,         { .i = +1 } },
 TAGKEYS(              XK_1,                                           0)
 TAGKEYS(              XK_2,                                           1)
 TAGKEYS(              XK_3,                                           2)
 TAGKEYS(              XK_4,                                           3)
 TAGKEYS(              XK_5,                                           4)
 TAGKEYS(              XK_6,                                           5)
 TAGKEYS(              XK_7,                                           6)
 TAGKEYS(              XK_8,                                           7)
 TAGKEYS(              XK_9,                                           8)
 { MODKEY|ShiftMask,   XK_q,                           quit,           { 0 } },
};