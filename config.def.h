/* user and group to drop privileges to */
static const char *user  = "nobody";
static const char *group = "nobody";

static const char *colorname[NUMCOLS] = {
	[BG]        =   "#1d2021",     /* background */
	[INIT]      =   "#1d2021",     /* after initialization */
	[INPUT]     =   "#282828",   /* during input */
	[INPUT_ALT] =   "#3c3836",   /* during input, second color */
	[FAILED]    =   "#fb4934",   /* wrong password */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;

/* size of square in px */
static const int squaresize = 100;

/* default message */
static const char * message = "   _   _   _   _   _   _   _   _  \n  / \\ / \\ / \\ / \\ / \\ / \\ / \\ / \\ \n ( P   A   S   S   W   O   R   D )\n  \\_/ \\_/ \\_/ \\_/ \\_/ \\_/ \\_/ \\_/ ";

/* text color */
static const char *text_colors[NUM_TEXTCOLS]  = {
  [TXT_NORMAL] = "#ebdbb2",
  [TXT_FAILED] = "#1d2021",
};

/* text size (must be a valid size) */
static const char * font_name = "fixed";
