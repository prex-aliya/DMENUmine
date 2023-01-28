/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
        "Liberation Mono:pixelsize=12:antialias=true:autohint=true",
        "Noto Color Emoji:pixelsize=11",
	"Hack Nerd Font Mono:pixelsize=11:antialias=true:autohint=true"
};


/* https://lospec.com/palette-list/cyberpunk-neons */
/*                Darker > Lighter              */
static const char col_pink1[]    =  "#0b001b";
static const char col_pink2[]    =  "#4d004f";
static const char col_pink3[]    =  "#c1115a";
static const char col_pink4[]    =  "#e13a6a";
/* blue           Darker > Lighter              */
static const char col_blue1[]    =  "#03274c";
static const char col_blue2[]    =  "#03274c";
static const char col_blue3[]    =  "#0f9595";
static const char col_blue4[]    =  "#53ebe4";


static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	[SchemeNorm] = { "#bbbbbb", "#222222" },
	[SchemeSel] = { col_pink1, col_pink4 },
	[SchemeOut] = { col_blue1, col_blue2 },
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 0;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";
