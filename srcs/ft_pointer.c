/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oventura <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 14:01:43 by oventura          #+#    #+#             */
/*   Updated: 2021/08/04 14:01:44 by oventura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
        ft_putchar(res[i++]);
    free(&res);
    free(&tmp);
    return (i);
}
