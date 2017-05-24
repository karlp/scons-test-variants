#include <stdio.h>
#include "shared.h"

void shared_thing(int a) {
#if CONFIG_BUILD_SMALL
	printf("Skipping doing things, small build: %d\n", a);
#else
	for (int i = 0; i < a; i++) {
		printf("hack shared thing: %d\n", i);
	}
#endif
}
