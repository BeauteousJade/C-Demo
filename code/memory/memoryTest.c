//
// Created by pby21 on 2022/12/25.
//

#include <stdio.h>
#include <malloc.h>
//#include "alloc.h"

int main_memory_test() {
//    int *p = MALLOC(25, int); // 使用自定义安全方法,申请25个int的大小。

    int *p = malloc(100); // 申请100个字节大小。如果是在整型为4个字节的机器上，那就是25个元素的数组。
//    int *p = malloc(25 * sizeof(int ));
    if (p == NULL) { // 因为内存不够或者其他原因导致内存分配失败，会返回为空。
        printf("out of memory!\n");
        exit(1);
    }
    free(p); // 释放内存

    return EXIT_SUCCESS;
}