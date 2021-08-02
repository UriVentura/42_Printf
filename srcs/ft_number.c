#include "../includes/ft_printf.h"

int ft_number(va_list args)
{
    t_types type;
    char    *res;
    int     i;

    type.number = va_arg(args, int);
    res = ft_itoa(type.number);
    i = 0;

    while(res[i] != '\0')
        ft_putchar(&res[i++]);
    ft_clearstr(&res);
    return (i);
}