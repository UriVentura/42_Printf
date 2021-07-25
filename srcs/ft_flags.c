/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flags.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oventura <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/25 20:09:25 by oventura          #+#    #+#             */
/*   Updated: 2021/07/25 20:09:26 by oventura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int ft_flag_dot(const char *save, int start, t_flags *flags, va_list args)
{
    int i;

    i = start;
    i++;
    if (save[i] == '*')
    {
        flags->dot = va_arg(args, int);
        i++;
    }
    else
    {
        flags->dot = 0;
        while (ft_isdigit(save[i]))
            flags->dot = (flags->dot * 10) + (save[i++] - '0');
    }
    return (i);
}

t_flags ft_flag_minus(t_flags flags)
{
    flags.minus = 1;
    flags.zero = 0;
    return (flags);
}

t_flags ft_flag_width(va_list args, t_flags flags)
{
    flags.hash = 1;
    flags.width = va_arg(args, int);
    if (flags.width < 0)
    {
        flags.minus = 1;
        flags.width *= -1;
    }
    return (flags);
}

t_flags		ft_flag_digit(char c, t_flags flags)
{
	if (flags.hash == 1)
		flags.width = 0;
	flags.width = (flags.width * 10) + (c - '0');
	return (flags);
}
