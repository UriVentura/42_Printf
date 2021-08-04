
#include "../includes/ft_printf.h"

int     ft_string(va_list args)
{
    t_types type;
    int     i;

    type.string = va_arg(args, char *);
    i = 0;
    if (!type.string)
        return (write(1, "(null)", 6));
    while(type.string[i] != '\0')
        ft_putchar(type.string[i++]);
    ft_clearstr(&type.string);
    return (i);
}