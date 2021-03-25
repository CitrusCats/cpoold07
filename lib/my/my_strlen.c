int my_strlen(const char *str)
{
    int count = 0;

    for (; str && *str != 0; ++str, ++count);
    return count;
}
