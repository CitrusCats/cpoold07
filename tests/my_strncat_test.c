#include <criterion/criterion.h>

char *my_strncat(char *dest, char const *src, int nb);

Test(my_strncat, my_strncat_test)
{
    char dest[20] = "I love ";
    char src[] = "William";
    char test[] = "I love Wil";

    my_strncat(dest, src, 3);
    cr_assert_str_eq(dest, test);
}

Test(my_strncat, my_strncat_test2)
{
    char dest[20] = "I love ";
    char src[] = "William";
    char test[] = "I love William";

    my_strncat(dest, src, 30);
    cr_assert_str_eq(dest, test);
}

Test(my_strncat, my_strncat_test3)
{
    char src[] = "cd";
    char test[] = "abc";
    char dest[7] = {'a', 'b', 0, 2, 'l', 'o', 'l'};

    my_strncat(dest, src, 1);
    cr_assert_str_eq(dest, test);
}

Test(my_strncat, my_strncat_test4)
{
    char dest[20] = "I love ";
    char src[] = "William";
    char test[] = "I love ";

    my_strncat(dest, src, -100);
    cr_assert_str_eq(dest, test);
}

Test(my_strncat, my_strncat_test5)
{
    char dest[20] = "I love ";
    char src[] = "William";
    char test[] = "I love ";

    my_strncat(NULL, src, -100);
    cr_assert_str_eq(dest, test);
}

Test(my_strncat, my_strncat_test6)
{
    char dest[20] = "I love ";
    char src[] = "William";
    char test[] = "I love ";

    my_strncat(dest, NULL, -100);
    cr_assert_str_eq(dest, test);
}
