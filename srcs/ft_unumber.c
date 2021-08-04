/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unumber.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oventura <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/03 15:08:48 by oventura          #+#    #+#             */
/*   Updated: 2021/08/03 15:08:51 by oventura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int     ft_unumber(va_list args)
{
    t_types type;
    char    *res;
    int     i;

    type.unumber = va_arg(args, unsigned int);
    res = ft_itoa(type.unumber);
    i = 0;
    while(res[i] != '\0')
        ft_putchar(&res[i++]);
    free(&res);
    return (i);
}
