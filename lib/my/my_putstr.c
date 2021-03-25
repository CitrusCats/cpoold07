int my_putstr(const char *str)
{
    for (; str && *str != 0; str++)
        my_putchar(*str);
}
