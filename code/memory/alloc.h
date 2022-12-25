//
// Created by pby21 on 2022/12/25.
//

/**
 * 定义一个不易发生错误的内存分配器。
 */
#include "stdlib.h"

#define malloc
#define MALLOC(num, type) (type *)alloc((num)*sizeof(type))

extern void *alloc(size_t size);
