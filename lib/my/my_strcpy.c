#include <stddef.h>

char *my_strcpy(char *dest, const char *src)
{
    for (int i = 0; src && dest && src[i] != NULL; i++)
        dest[i] = src[i];
    return dest;
}
