//
// Created by pby21 on 2023/1/2.
//

#include "stdio.h"

/**
 * 字符串指针。
 */
int main() {

    // 指针+1， 原来指向x，现在指向y。
    char *c1 = "xyz" + 1;

    // x，非指针。
    char c2 = *"xyz";

    // z, 非指针。
    char c3 = "xyz"[2];

    // 非法访问，超出字符串的范围。
//    char c4 = *("xyz" + 4)


    printf("c1:%s\nc2:%c\nc3:%c", c1, c2, c3);

}