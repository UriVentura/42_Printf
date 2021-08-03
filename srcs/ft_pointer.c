#include "../includes/ft_printf.h"

int     ft_pointer(va_list args)
{
    t_types type;
    char    *tmp;
    char    *res;
    int     i;

    type.pointer = va_arg(args, size_t);
    if (!type.pointer)
        return (write(1, "0x0", 3));
    tmp = ft_itoa(type.pointer);
    res = ft_strjoin("0x", tmp);
    i = 0;
    while(res[i] != '\0')
        ft_putchar(&res[i++]);
    ft_clearstr(&res);
    ft_clearstr(&tmp);
    return (i);
}