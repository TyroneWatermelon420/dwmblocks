//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"❤",       "uname -r",	    0,		            0},
	//{"Cpu:",    "top -bn1 | grep load | awk '{printf """, $(NF-2)}'",					5,		0},
    {"🖥 Mem:", "free --mebi -h | sed -n '2{p;q}' | awk '{printf $3}'", 1, 0},
    {"⌨: ",    "setxkbmap -query | grep layout | awk '{printf $2}'",    1,  0},
    {"⏱: ",     "date | awk '{printf $4}'", 1,  0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
