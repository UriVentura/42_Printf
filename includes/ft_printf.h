/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oventura <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/25 16:59:27 by oventura          #+#    #+#             */
/*   Updated: 2021/07/25 20:10:13 by oventura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

/*
 *---------------------------------- Libraries -----------------------------
 */

# include <unistd.h>
# include <stdlib.h>
# include <string.h>
# include <limits.h>
# include <stdarg.h>

#include "../libft/libft.h"

/*
 *---------------------------------- Structs -------------------------------
 */

typedef unsigned char   t_byte;

typedef struct s_types
{
    size_t      pointer;
    char        *str;
    int         character;
    int         number;
    int         unumber;
    int         hexa;
}               t_types;

/*
 *---------------------------------- FUNCTIONS -------------------------------
 */

int         main();

int         ft_printf(const char *format, ...);
void	    ft_putchar(char c);
void	    ft_clearstr(char **str);
static int  ft_format(const char *format, va_list args);

/*
 *---------------------------------- CONVERTIONS -------------------------------
 */
int         ft_convert(char *format, int offset, va_list args);

int         ft_number(va_list args);
int         ft_unumber(va_list args, ...);
int         ft_hexa(va_list args, ...);

#endif
