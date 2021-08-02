
#include "../includes/ft_printf.h"

int     ft_unumber(va_list args)
{
    t_types type;
    char    *res;
    int     i;

    type.unumber = va_args(args, int);
    res = //Funcion del itoa con unsigned int (por hacer)
    i = 0;
    while(res[i] != '\0')
        ft_putchar(&res[i++]);
    ft_clearstr(&res);
    return (i);
}