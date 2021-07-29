/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oventura <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/22 16:49:05 by oventura          #+#    #+#             */
/*   Updated: 2021/07/22 16:49:07 by oventura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

t_flags ft_flags(void)
{
    t_flags flags;

    flags.dot   =   -1;
    flags.hash  =   0;
    flags.zero  =   0;
	flags.minus =   0;
	flags.plus  =   0;
    flags.space =   0;
    flags.width =   0;
    flags.type  =   0;

	return (flags);
}

int ft_printf(const char *format, ...)
{
    char            *str;
    unsigned int    i;
    char            *s;

    //Init args
    va_list arg;
    va_start(arg, format);

    while(*str != '\0')
    {
        str = format;
        str++;

        while(*str != '%')
        {
            ft_putchar(*str);
            str++;
        }
        str++;
    }
}