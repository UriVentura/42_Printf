/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oventura <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 14:02:17 by oventura          #+#    #+#             */
/*   Updated: 2021/08/04 14:02:18 by oventura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

static void	len_htoa(char *str, unsigned int n, int i, int convert)
{
	str[i] = '\0';
	while (i--)
	{
		if (n % 16 < 10)
		{
			str[i] = (n % 16) + '0';
			n = n / 16;
		}
		else
		{
			str[i] = (n % 16) + convert;
			n = n / 16;
		}
	}
}

char	*ft_htoa(unsigned int n, int convert)
{
	char			*res;
	int				i;
	unsigned int	tmp;

	i = 1;
	tmp = n / 16;
	while (tmp)
	{
		i++;
		tmp = tmp / 16;
	}
	res = malloc(i + 1);
	if (!res)
		return (NULL);
	if (convert == 'x')
		convert = 87;
	else
		convert = 55;
	len_htoa(res, n, i, convert);
	return (res);
}

int	ft_hexa(va_list args, int convert)
{
	t_types	type;
	char	*res;
	int		i;

	type.hexa = va_arg(args, int);
	res = ft_htoa(type.hexa, convert);
	i = 0;
	while (res[i] != '\0')
		ft_putchar(res[i++]);
	ft_clearstr(&res);
	return (i);
}
