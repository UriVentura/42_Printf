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

int	ft_unumber(va_list args)
{
	t_types	type;
	char	*res;
	int		i;

	type.unumber = va_arg(args, unsigned int);
	res = ft_utoa(type.unumber);
	i = 0;
	while (res[i] != '\0')
		ft_putchar(res[i++]);
	ft_clearstr(&res);
	return (i);
}

static void	len_utoa(char *str, unsigned int n, int i)
{
	str[i] = '\0';
	while (i--)
	{
		str[i] = (n % 10) + '0';
		n /= 10;
	}
}

char	*ft_utoa(unsigned int n)
{
	char			*res;
	int				i;
	unsigned int	tmp;

	i = 1;
	tmp = n / 10;
	while (tmp)
	{
		i++;
		tmp /= 10;
	}
	res = malloc(i + 1);
	if (!res)
		return (NULL);
	len_utoa(res, n, i);
	return (res);
}
