int my_isneg(int n)
{
    if (n >= 0) {
        my_putchar('P');
        my_putchar('\n');
    } else {
        my_putchar('N');
        my_putchar('\n');
    }
    return 0;
}

void my_putchar(char c)
{
    write(1, &c, 1);
}

int main(void)
{
    my_isneg(1);
    my_isneg(0);
    my_isneg(-1);
    my_isneg(6969);
    my_isneg(-6969);
    my_isneg(2);
    my_isneg(-2);
    return 0;
}
