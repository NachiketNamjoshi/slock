/* user and group to drop privileges to */
static const char *user  = "nobody";
static const char *group = "nobody";

static const char *colorname[NUMCOLS] = {
	[BG]        =   "#11111b",     /* background */
	[INIT]      =   "#11111b",     /* after initialization */
	[INPUT]     =   "#181825",   /* during input */
	[INPUT_ALT] =   "#1e1e2e",   /* during input, second color */
	[FAILED]    =   "#f38ba8",   /* wrong password */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;

/* size of square in px */
static const int squaresize = 100;

/* default message */
static const char * message = "   _   _   _   _   _   _   _   _  \n  / \\ / \\ / \\ / \\ / \\ / \\ / \\ / \\ \n ( P   A   S   S   W   O   R   D )\n  \\_/ \\_/ \\_/ \\_/ \\_/ \\_/ \\_/ \\_/ ";

/* text color */
static const char *text_colors[NUM_TEXTCOLS]  = {
  [TXT_NORMAL] = "#cdd6f4",
  [TXT_FAILED] = "#11111b",
};

/* text size (must be a valid size) */
static const char * font_name = "fixed";
