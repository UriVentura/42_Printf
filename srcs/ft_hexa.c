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

//Funcion de itoa para hexadecimal
static void	len_htoa(char *str, unsigned int n, int i, int convert)
{
	str[i] = '\0';
    while(i--)
    {
        if(n % 16 < 10)
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

//Hacemos un itoa pero reconvertido para el valor hexadecimal con algunos retoques y en base 16
//Restando el ASCII del hexadecimal en 55, 'A' convierte un carácter en el rango 'A' a 'F' en un valor
//de entre el rango 10 a 15. De manera igual al 87, convierte un carácter en el rango 'a' a 'f' en
//un rango de 10 a 15
char	*ft_htoa(unsigned int n, int convert)
{
	char            *res;
    int             i;
    unsigned int    tmp;

	i = 1;
    tmp = n / 16;
    while(tmp)
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

//Funcion para convertir a hexadecimal
int     ft_hexa(va_list args, int convert)
{
    t_types type;
    char    *res;
    int     i;

    type.hexa = va_arg(args, int);
    res = ft_htoa(type.hexa, convert);
    i = 0;
    while(res[i] != '\0')
        ft_putchar(res[i++]);
    ft_clearstr(&res);
    return (i);
}