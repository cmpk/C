//// コンパイル方法
//// $ gcc -o main library.c main.c

#include <stdio.h>    //標準ライブラリは<>で囲む習慣がある
#include "library.h"

int my_func(int a) {
    return a ^ 2;
}

int main(void) {
    print_calculation(3, my_func);
    return 0;
}
