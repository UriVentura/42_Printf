/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oventura <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 17:54:24 by oventura          #+#    #+#             */
/*   Updated: 2021/07/29 17:54:25 by oventura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

//El putchar de toda la vida
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

//Elimino los contenidos de una string especifica o un rango de string
void	ft_clearstr(char **str)
{
	if (*str && **str)
	{
		free(*str);
		*str = (NULL);
	}
}
