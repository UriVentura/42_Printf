
#include "../includes/ft_printf.h"

int ft_istypelist(int c)
{
    return ((c == 'c') || (c == 's') || (c == 'p') || (c == 'd') || (c == 'i')
            || (c == 'u') || (c == 'x') || (c == 'X') || (c == '%'));
}

int ft_isflagslist(int c)
{
    return ((c == '-') || (c == ' ') || (c == '0') || (c == '.') || (c == '*'));
}
