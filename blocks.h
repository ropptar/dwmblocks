//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"",		"bar-usage",	15,					0},
	{"Music",	"",				5,					0},
	{"",		"bar-keymap",	0,					1},
	{"",		"bar-clock",	60,					0},
};

//sets delimiter between status commands. NULL character ('\0') means no delimiter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
