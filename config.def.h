/* user and group to drop privileges to */
static const char *user  = "nobody";
static const char *group = "nobody";

static const char *colorname[NUMCOLS] = {
	[BG]        =   "#282a36",     /* background */
	[INIT]      =   "#282a36",     /* after initialization */
	[INPUT]     =  "#bd93f9",   /* during input */
	[INPUT_ALT] =  "#ff79c6",   /* during input, second color */
	[FAILED]    = "#ff5555",   /* wrong password */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;

/* size of square in px */
static const int squaresize = 100;

/* default message */
static const char * message = "   _   _   _   _   _   _   _   _  \n  / \\ / \\ / \\ / \\ / \\ / \\ / \\ / \\ \n ( P   A   S   S   W   O   R   D )\n  \\_/ \\_/ \\_/ \\_/ \\_/ \\_/ \\_/ \\_/ ";

/* text color */
static const char * text_color = "#f8f8f2";

/* text size (must be a valid size) */
static const char * font_name = "fixed";
