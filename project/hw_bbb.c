#include <stdio.h>
#include "hw.h"
#define STR1(x) #x
#define STR(x) STR1(x)
#define HWS STR(HW)
int hw_get_count(void) {
        printf("This is hardware: %s\n", HWS);
	return 4;
}
