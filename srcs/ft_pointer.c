/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ptr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oventura <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 14:01:43 by oventura          #+#    #+#             */
/*   Updated: 2021/08/04 14:01:44 by oventura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

static void	len_ptoa(char *str, size_t ptr, size_t i)
{
	str[i] = '\0';
	while (i--)
	{
		if (ptr % 16 < 10)
		{
			str[i] = (ptr % 16) + '0';
			ptr /= 16;
		}
		else
		{
			str[i] = (ptr % 16) + 87;
			ptr /= 16;
		}
	}
}

char	*ft_ptoa(size_t ptr)
{
	char	*res;
	size_t	i;
	size_t	tmp;

	i = 1;
	tmp = ptr / 16;
	while (tmp)
	{
		i++;
		tmp /= 16;
	}
	res = malloc(i + 1);
	if (!res)
		return (NULL);
	len_ptoa(res, ptr, i);
	return (res);
}

int	ft_pointer(va_list args)
{
	t_types		type;
	char		*tmp;
	char		*res;
	int			i;

	type.pointer = va_arg(args, size_t);
	if (!type.pointer)
		return (write(1, "0x0", 3));
	tmp = ft_ptoa(type.pointer);
	res = ft_strjoin("0x", tmp);
	i = 0;
	while (res[i] != '\0')
		ft_putchar(res[i++]);
	ft_clearstr(&res);
	ft_clearstr(&tmp);
	return (i);
}
