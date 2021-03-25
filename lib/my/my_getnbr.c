#include <limits.h>

int my_getnbr(const char *str)
{
    long long number = 0;
    int negative = 1;

    for (; *str == '-' || *str == '+'; str++)
        (*str == '-') ? negative *= -1 : 0;
    for (; str && *str != '\0' && *str >= '0' && *str <= '9'; str++) {
        number *= 10;
        number += *str - '0';
    }
    return (number < INT_MIN || number > INT_MAX) ? 0 : number * negative;
}
