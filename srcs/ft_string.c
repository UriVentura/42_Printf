
#include "../includes/ft_printf.h"

int     ft_string(va_list args)
{
    t_types type;
    int     i;
    int     *res;

    type.string = va_arg(args, char *);
    i = 0;
    res = type.string;
    if (!res)
        return (write(1, "(null)", 6));
    while(res[i] != '\0')
        ft_putchar(&res[i++]);
    ft_clearstr(&res);
    return (i);
}