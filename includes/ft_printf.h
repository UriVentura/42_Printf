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

typedef struct s_flags
{
    int         hash; // #
    int         dot; // .
    int         zero; // 0
    int         minus; // -
    int         plus; // +
    int         space; // ' '
    int         width; // 0 - 9  

    char        type; // "c"
}               t_flags;

typedef struct s_format
{
    char    *in_str;
    int     out_int;
}           t_format;

/*
 *---------------------------------- INT -------------------------------
 */

int     main();

int     ft_istypelist(int c);
int     ft_isflagslist(int c);
int     ft_printf(const char *format, ...);
void	ft_putchar(char c);
int ft_convert(unsigned int i);

#endif
