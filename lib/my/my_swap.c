void my_swap(int *a, int *b)
{
    int s = 0;

    if (!a || !b)
        return;
    s = *a;
    *a = *b;
    *b = s;
}
