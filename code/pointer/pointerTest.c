//
// Created by pby21 on 2022/12/25.
//
#include <stdio.h>
#include "stdlib.h"


int main_pointer_test() {
    int i = 0;
    const int *pi = &i;
    int *const pi1 = &i;

    i = 5;
    printf("%d, %d\n", i, *pi);

    int a = 1;
    *pi1 = 1; // 允许。
//    pi1 = &a;不允许修改新的指向。

//   *pi = 1;  不允许修改值。
    pi = &a; // 允许

    int *f, g; // f是指针，g是int。




    return EXIT_SUCCESS;
}
