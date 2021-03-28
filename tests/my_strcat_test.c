#include <criterion/criterion.h>

char *my_strcat(char *dest, char const *src);

Test(my_strcat, my_strcat_test)
{
    char dest[20] = "I love ";
    char src[] = "William";
    char test[] = "I love William";

    my_strcat(dest, src);
    cr_assert_str_eq(dest, test);
}

Test(my_strcat, my_strcat_test2)
{
    char src[] = "cd";
    char test[] = "abcd";
    char dest[7] = {'a', 'b', 0, 2, 'l', 'o', 'l'};

    my_strcat(dest, src);
    cr_assert_str_eq(dest, test);
}
