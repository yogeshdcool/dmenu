/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
static int fuzzy = 1;                      /* -F  option; if 0, dmenu doesn't use fuzzy matching     */

/* -fn option overrides fonts[0]; default X11 font or font set */
static char font[] ="JetBrainsMono Nerd Font:style:medium:size=10:antialias=true:hinting=true";
static const char *fonts[] = {
	font,
	"monospace:size=10",
};

static char *prompt      = NULL;      /* -p  option; prompt to the left of input field */

static char normfgcolor[] = "#bbbbbb";
static char normbgcolor[] = "#222222";
static char selfgcolor[]  = "#eeeeee";
static char selbgcolor[]  = "#005577";
static char outfgcolor[]  = "#000000";
static char outbgcolor[]  = "#00ffff";
static char hlfgcolor[]  = "#ffc978";
static char *colors[SchemeLast][2] = {

	/*     fg         bg       */
	[SchemeNorm] = { normfgcolor, normbgcolor },
	[SchemeSel]  = { selfgcolor,  selbgcolor  },
	[SchemeOut]  = { outfgcolor,  outbgcolor },
	[SchemeSelHighlight] = { hlfgcolor, selbgcolor },
	[SchemeNormHighlight] = { hlfgcolor, normbgcolor },
	
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 0;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

/*
 * Xresources preferences to load at startup
 */
ResourcePref resources[] = {
	{ "color7", STRING, &normfgcolor },
	{ "color0", STRING, &normbgcolor },
	{ "color7",  STRING, &selfgcolor },
	{ "color1",  STRING, &selbgcolor },
	{ "color7",  STRING, &outfgcolor },
	{ "color14",  STRING, &outfgcolor },
	{ "color5",  STRING, &hlfgcolor },
};
