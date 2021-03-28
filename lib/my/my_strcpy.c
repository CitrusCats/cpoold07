#include <stddef.h>

#include "my.h"

char *my_strcpy(char *dest, const char *src)
{
    for (int i = 0; src != NULL && dest != NULL && src[i] != '\0'; ++i)
        dest[i] = src[i];
    return dest;
}
