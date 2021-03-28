#include "my.h"

void my_rev_params(int argc,char **argv)
{
    for (int i = argc - 1; i >= 0; --i) {
        my_putstr(argv[i]);
        my_putchar('\n');
    }
}
