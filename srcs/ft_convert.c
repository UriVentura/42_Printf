/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oventura <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 17:58:48 by oventura          #+#    #+#             */
/*   Updated: 2021/07/29 17:58:49 by oventura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int ft_convert(char *format, int i, va_list args)
{
    int ret;

    if (format[i + 1] == 'i' || format[i + 1] == 'd')
        ret = ft_number(args);
    else if (i == 's')
        ft_putchar(i);
    else if (i == 'p')
        ft_putchar(i);
    else if (i == 'd')
        ft_putchar(i);
    else if (i == 'i')
        ft_putchar(i);
    else if (format[i + 1] == 'u')
        ret = ft_unumber(args);
    else if (i == 'x')
        ft_putchar(i);
    else if (i == 'X')
        ft_putchar(i);
    else if (i == '%')
        ft_putchar(i);
}
