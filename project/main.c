#include <stdio.h>
#include "hw.h"
#include "shared.h"

int main(void) {

	int count = hw_get_count();
	shared_thing(count);
#if CONFIG_BUILD_SMALL
#else
	printf("hey, big builds get to print out a finishing line!\n");
#endif
}
