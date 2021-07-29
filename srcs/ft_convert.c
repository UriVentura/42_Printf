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

int ft_convert(unsigned int i)
{
    if (i == 'c')
        ft_putchar(i);
    else if (i == 'd')
        ft_putchar(i);
    else if (i == 'e')
        ft_putchar(i);
    else if (i == 'f')
        ft_putchar(i);
    else if (i == 'g')
        ft_putchar(i);
    else if (i == 'i')
        ft_putchar(i);
    else if (i == 'o')
        ft_putchar(i);
    else if (i == 's')
        ft_putchar(i);
    else if (i == 'u')
        ft_putchar(i);
    else if (i == 'x')
        ft_putchar(i);
    else if (i == 'X')
        ft_putchar(i);
    else if (i == '%')
        ft_putchar(i);
}