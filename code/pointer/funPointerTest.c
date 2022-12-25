//
// Created by pby21 on 2022/12/25.
//

#include <stdio.h>
#include "stdlib.h"

int f0(int); // 函数，返回值为int

int *f1(); // 函数，返回值int*

int (*f2)(); // 函数指针，指向的是是一个返回值类型为int的函数

int *(*f3)(); // 函数指针，指向的是一个返回值类型int * 的函数

int (*f4)(int, float); // 函数指针，指向的是一个返回类型为int，且一个参数是int， 一个参数是float的函数


int b[]; // int类型的数组

int *b1[]; // int* 类型的数组。

int (*b2[])(); // 函数指针类型的数组，所指向的函数返回类型为int.

int *(*b3[])(); // 函数指针类型的数组，所指向的函数返回类型为int *.

int *(*b4[])(int, float); // 函数指针类型的数组，所指向的函数范围类型为int *，且一个参数是int类型，一个参数是float类型。

int (*f5())[]; // ? 是不是跟b2一样的?

int sum(int a, int b) {
    return a + b;
}


/**
 *
 * @param f 函数指针，两个参数都是int类型，返回类型为int.
 */
void test(int (*f)(int, int), int a, int b) {
    int res = f(a, b);
    printf("res:%d\n", res);
}

int main() {
    int (*pf)(int) = &f0;

    // 三种方式都是正确的。
    int ans;
    ans = f0(100);
    printf("ans:%d\n", ans);
    ans = (*pf)(101);
    printf("ans:%d\n", ans);
    ans = pf(102);
    printf("ans:%d\n", ans);

    test(sum, 10, 20);


    // 函数指针数组
    int (*funArray[])(int) = {f0, f0, f0};

    return EXIT_SUCCESS;
}


int f0(int a) {
    return a;
}
