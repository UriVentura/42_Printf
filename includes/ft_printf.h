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

/*
 *---------------------------------- INT -------------------------------
 */

int ft_istypelist(int c);
int ft_isflagslist(int c);


#endif
