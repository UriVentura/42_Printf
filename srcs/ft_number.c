/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_number.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oventura <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/03 15:08:40 by oventura          #+#    #+#             */
/*   Updated: 2021/08/03 15:08:42 by oventura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_number(va_list args)
{
	t_types		type;
	char		*res;
	int			i;

	type.number = va_arg(args, int);
	res = ft_itoa(type.number);
	i = 0;
	while (res[i] != '\0')
		ft_putchar(res[i++]);
	ft_clearstr(&res);
	return (i);
}
