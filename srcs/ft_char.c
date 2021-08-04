#include "../includes/ft_printf.h"

int ft_char(va_list args)
{
    t_types type;

    type.character = va_arg(args, int);
    ft_putchar(type.character);
    return (1);
}