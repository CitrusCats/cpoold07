#include "my.h"

void my_print_params(int argc,char **argv)
{
    for (int i = 0; i < argc; ++i) {
        my_putstr(argv[i]);
        my_putchar('\n');
    }
}
