

#ifndef __GC_STRING_H
#define __GC_STRING_H

#include "types.h"

void *memcpy(void *dst, const void *src, cgc_size_t len);
int memcmp(const void *b1, const void *b2, cgc_size_t n);
void *memset(void *b, int c, cgc_size_t len);

char *strcpy(char *dst, const char *src);

int strcmp(const char *s1, const char *s2);
int strncmp(const char *s1, const char *s2, cgc_size_t n);

cgc_size_t strlen(const char *str);

char *strchr(const char *s, int c);

#endif

