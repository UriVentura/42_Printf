/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oventura <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 19:45:05 by oventura          #+#    #+#             */
/*   Updated: 2021/08/04 19:45:07 by oventura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
        ft_putchar(&type.string[i++]);
    return (i);
}
