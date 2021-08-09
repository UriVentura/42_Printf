/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_char.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oventura <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 14:01:26 by oventura          #+#    #+#             */
/*   Updated: 2021/08/04 14:01:27 by oventura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_char(va_list args)
{
	t_types	type;

	type.character = va_arg(args, int);
	ft_putchar(type.character);
	return (1);
}
