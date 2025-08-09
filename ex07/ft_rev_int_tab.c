void    ft_rev_int_tab(int *tab, int size)
{
    int tmp;
    int index;

    index = 0;
    size--;
    while (index < size)
    {
        tmp = tab[index];
        tab[index] = tab[size - index];
        tab[size - index] = tmp;
        index++;
        size--;
    }
}