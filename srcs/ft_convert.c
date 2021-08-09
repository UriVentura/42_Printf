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

int	ft_convert(char *format, int i, va_list args)
{
	int	ret;

	if (format[i + 1] == 'i' || format[i + 1] == 'd')
		ret = ft_number(args);
	else if (format[i + 1] == 's')
		ret = ft_string(args);
	else if (format[i + 1] == 'c')
		ret = ft_char(args);
	else if (format[i + 1] == 'p')
		ret = ft_pointer(args);
	else if (format[i + 1] == 'u')
		ret = ft_unumber(args);
	else if (format[i + 1] == 'x')
		ret = ft_hexa(args, 'x');
	else if (format[i + 1] == 'X')
		ret = ft_hexa(args, 'X');
	else if (format[i + 1] == '%')
		ret = write(1, "%", 1);
	else
		return (-1);
	return (ret);
}
