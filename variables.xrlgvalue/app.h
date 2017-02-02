#ifndef APP_H
#define APP_H

#define FG_BLUE		"\033[34m"
#define FG_RESET	"\033[0m"

void headline(const char* msg) {
	std::cout << std::endl << FG_BLUE << "--" << msg << "--" << FG_RESET << std::endl;
}

void explain(const char* msg, int tab_count=2) {
		
	char tabBuffer[30] = "\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t";
	tabBuffer[tab_count] = 0x0;
	std::cout << msg << tabBuffer;
}

#endif // APP_H