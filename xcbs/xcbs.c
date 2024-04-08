#include "xcbs.h"

int main() {
	printf("HAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHA...\n");
#ifdef _WIN32
	Sleep(1000);
#else
	sleep(1000);
#endif
	printf("hahaha.\n");
#ifdef _WIN32
	Sleep(1000);
#else
	sleep(1000);
#endif
	printf("i have to redo all my work from scratch.\n");
	return 0;
}
