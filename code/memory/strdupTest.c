//
// Created by pby21 on 2022/12/25.
//
#include <malloc.h>
#include <string.h>
#include <stdio.h>

/**
* 复制String.
*/

char *strdup(const char *str) {
    char *new_str = malloc(strlen(str) + 1);
    if (new_str != NULL) {
        strcpy(new_str, str);
    }
    return new_str;
}


int main() {
    char *str = "庞柄宇123";
    char *new_str = strdup(str);
    printf("%s\n", new_str);
    // 1个char是一个字节，malloc是以字节为单位分配内存。
    printf("%llu, %llu", strlen(str), sizeof(char) * 6);
}