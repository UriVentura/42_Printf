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
#include <stdarg.h>

t_flags ft_flags(void)
{
    t_flags flags;

    flags.hash  =   0;
	flags.dot   =   -1;
    flags.zero  =   0;
	flags.minus =   0;
	flags.plus  =   0;
    flags.space =   0;
    flags.width =   0;
    flags.type  =   0;

	return (flags);
}

int     ft_flags_parse(const char *save, t_flags *flags, va_list args)
{
    int i;
    //COMPROBAR IGUALACIONES DE FLAGS
    while (save[i])
    {
        if (!ft_isdigit(save[i]) &&!ft_istypelist(save[i]) 
        && !ft_isflagslist(save[i]))
            break ;
        if (save[i] == '0' && flags->width == 0 && flags->minus == 0)
            flags->zero = 1;
        if (save[i] == '.')
            i = ft_flag_dot(save, i, flags, args);
        if (save[i] == '-')
            flags == ft_flag_minus(*flags);
        if (save[i] == '*')
            flags == ft_flag_width(args, *flags);
        if (ft_isdigit(save[i]))
            flags == ft_flag_digit(save[i], *flags);
        if (ft_istypelist(save[i]))
        {
            flags->type = save[i];
            break ;
        }
        i++;
    }
    return (i);
}