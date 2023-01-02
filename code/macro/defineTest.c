//
// Created by pby21 on 2023/1/2.
//
#include "stdio.h"

#define SQUARE(x) x * x
#define SQUARE_V2(x) (x) * (x)

#define DOUBLE(x) (x) + (x)
#define DOUBLE_V2(x) ((x) + (x))

// 宏定义字符串拼接。
#define PRINT(FORMAT, VALUE) printf("The value is " FORMAT "\n", VALUE)


// #VALUE 最后会被替换成为 VALUE 。
#define PRINT_V2(FORMAT, VALUE) printf("The value of " #VALUE " is " FORMAT "\n", VALUE)

// ## 会把后面的字符串拼接到前面。
#define ADD_TO_SUM(sum_number, value) sum ## sum_number += value


int main() {


    int a = 10;

    int b = SQUARE(10); // 10 * 10;
    b = SQUARE(a + 1); // 10 + 1 * 10 + 1;
    b = SQUARE_V2(a + 1); // (10 + 1) * (10 + 1);

    b = DOUBLE(10); // (10) + (10);
    b = DOUBLE(a + 1); // (10 + 1) + (10 + 1);
    b = 10 * DOUBLE(a); // 10 * (10) + (10);
    b = 10 * DOUBLE_V2(a); // 10 *  ((10) + (10));

    PRINT("%d", 3);

    PRINT_V2("%d", a + 10);

    int sum5 = 0;
    // 这里给sum5 加 20。
    ADD_TO_SUM(5, 20);
    printf("sum5:%d\n", sum5);
}