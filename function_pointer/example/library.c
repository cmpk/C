#include <stdio.h>
#include "library.h"

void print_calculation(int a, FUNCP func) {
    printf("Input : %d\n", a);
    int b = func(a);
    printf("Output : %d\n", b);
}
