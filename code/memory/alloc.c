//
// Created by pby21 on 2022/12/25.
//

/**
 * 不易发生错误的内存分配器实现。
 */
#include "stdio.h"
#include "alloc.h"

#undef malloc // 增加#define是为了保护malloc的调用不被随便调用，所以要在用之前加入#undef指令

void *alloc(size_t size) {
    // 申请所需的内存，并且检查是否分配成功。
    void *new_item = malloc(size);
    if (new_item == NULL) {
        printf("out of memory!\n");
        exit(1);
    }
    return new_item;
}

