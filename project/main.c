#include <stdio.h>
#include "hw.h"
#include "shared.h"
#include "options.h"

#define STR1(x) #x
#define STR(x) STR1(x)

int main(void) {
	printf("App version (total): %s\n", STR(VERSION_STRING));
	printf("  major.minor: %d.%d\n", VERSION_MAJOR, VERSION_MINOR);
	printf("  and is %s\n", VERSION_CLEAN ? "clean" : "dirty");
	int count = hw_get_count();
	shared_thing(count);
	printf("All builds print option: %d\n", OPTION_somewild);
#if CONFIG_BUILD_SMALL
#else
	printf("hey, big builds get to print out a finishing line!\n");
#endif
}
