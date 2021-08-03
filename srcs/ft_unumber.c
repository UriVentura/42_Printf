
#include "../includes/ft_printf.h"

int     ft_unumber(va_list args)
{
    t_types type;
    char    *res;
    int     i;

    type.unumber = va_arg(args, unsigned int);
    res = ft_itoa(type.unumber);
    i = 0;
    while(res[i] != '\0')
        ft_putchar(&res[i++]);
    ft_clearstr(&res);
    return (i);
}