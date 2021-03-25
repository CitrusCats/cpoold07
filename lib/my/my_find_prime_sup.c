int my_find_prime_sup(int nb)
{
    if (my_is_prime(nb) == 1)
        return nb;
    return (my_find_prime_sup(nb +1));
}

int my_is_prime(int nb)
{
    if (nb <= 1)
        return 0;
    for (int start = 2; start < nb; start++)
        if ((nb % start) == 0)
            return 0;
    return 1;
}
