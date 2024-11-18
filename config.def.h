/* user and group to drop privileges to */
static const char *user  = "nobody";
static const char *group = "nogroup";

static const char *colorname[NUMCOLS] = {
	[INIT] =   "black",     /* after initialization */
	[INPUT] =  "#005577",   /* during input */
	[FAILED] = "#CC3333",   /* wrong password */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;

#include <X11/XF86keysym.h>

static const Passthrough passthroughs[] = {
	/* Modifier   Key */
	{ 0,          XF86XK_AudioRaiseVolume },
	{ 0,          XF86XK_AudioLowerVolume },
	{ 0,          XF86XK_AudioMute },
	{ 0,          XF86XK_AudioPause },
	{ 0,          XF86XK_AudioStop },
	{ 0,          XF86XK_AudioNext },
	{ 0,          XF86XK_AudioPrev },
	{ 0,          XF86XK_MonBrightnessUp },
	{ 0,          XF86XK_MonBrightnessDown },
};
