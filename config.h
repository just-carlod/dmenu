/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1; // -b  option
static int centered = 1; // -c option
static int min_width = 500;
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"Jetbrains mono:size=10:antialias=true:autohint=true",
	"Noto Color Emoji:pixelsize=10:antialias=true;autohint=true"
};
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	[SchemeNorm] = { "#e5e9f0","#2e3440" },
	[SchemeSel] = { "#e5e9f0", "#b48ead" },
	[SchemeOut] = { "#e5e9f0", "#00ffff" },
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 20;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";
static const unsigned int border_width = 2;
