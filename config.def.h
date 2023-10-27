/* user and group to drop privileges to */
static const char *user  = "nobody";
static const char *group = "nobody";

static const char *colorname[NUMCOLS] = {
	[BG]        =   "black",     /* background */
	[INIT]      =   "black",     /* after initialization */
	[INPUT]     =  "#8EC07C",   /* during input */
	[INPUT_ALT] =  "#458588",   /* during input, second color */
	[FAILED]    = "#FE8019",   /* wrong password */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;

/* size of square in px */
static const int squaresize = 50;

/* default message */
static const char * message = "Enter Your Password";

/* text color */
static const char * text_color = "#ffffff";

/* text size (must be a valid size) */
static const char * font_name = "fixed";
