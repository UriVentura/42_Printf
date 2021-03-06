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

int	ft_format(const char *format, va_list args)
{
	char	*tmp;
	int		ret;
	int		i;

	tmp = ft_strdup(format);
	ret = 0;
	i = 0;
	while (tmp[i] != '\0')
	{
		if (tmp[i] != '%')
			ret = ret + write(1, &tmp[i++], 1);
		else
		{
			ret = ret + ft_convert(tmp, i, args);
			if (ret == -1)
			{
				ret = write(1, "%", 1);
				i++;
				continue ;
			}
			i = i + 2;
		}
	}
	free(tmp);
	return (ret);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		res;

	va_start(args, format);
	res = ft_format(format, args);
	va_end(args);
	return (res);
}
