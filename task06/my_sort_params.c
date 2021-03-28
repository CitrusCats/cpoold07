#include <stddef.h>

#include "my.h"

void my_swapstr(char **a, char **b)
{
    char *s;

    if (a == NULL || b == NULL)
        return;
    s = *a;
    *a = *b;
    *b = s;
}

// (char * aka string) *

void my_sort_string_array(char **array, int size)
{
    for (int cycles = 0; array && cycles < (size - 1); ++cycles)
        for (int counter = 0; counter < (size - 1 - cycles); ++counter)
            if (my_strcmp(array[counter], array[counter + 1]) > 0)
                my_swapstr(&array[counter], &array[counter + 1]);
}

void my_sort_params(int argc,char **argv)
{
    my_sort_string_array(argv, argc);
    for (int i = 0; i < argc; ++i) {
        my_putstr(argv[i]);
        my_putchar('\n');
    }
}
 