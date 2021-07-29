/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oventura <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 17:54:30 by oventura          #+#    #+#             */
/*   Updated: 2021/07/29 17:54:32 by oventura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"
#include <stdio.h>

int		main(void)
{
    //FT_PRINTF Test Template
    /* Printf */
        //printf("Test 1\t\t: NULL\n\n");
        //printf("Function\t: Printf\n");
        //printf("Input\t\t: %NULL\n");
        //printf("Output\t\t: ");
        //printf("%NULL\n\n");
    /* ft_printf */
        //ft_printf("Function\t: ft_printf\n");
        //ft_printf("Input\t\t: %NULL\n");
        //ft_printf("Output\t\t: ");
        //ft_printf("%NULL\n\n");

    // ft_plusFlag(ft_minus(ft_hash(ft_whatEver(va List))));

    //Mod Check
    printf("Test 1\t\t: Mod Check\n\n");
    printf("Function\t: Printf\n");
    printf("Input\t\t: %%\n");
    printf("Output\t\t: ");
    printf("%%\n\n");

    ft_printf("Function\t: ft_printf\n");
    ft_printf("Input\t\t: %%\n");
    ft_printf("Output\t\t: ");
    ft_printf("%%\n\n");

    //String Format Check
    printf("Test 2\t\t: String Format Check\n\n");
    printf("Function\t: Printf\n");
    printf("Input\t\t: This is a test string.\n");
    printf("Output\t\t: ");
    printf("This is a test string.\n\n");

    ft_printf("Function\t: ft_printf\n");
    ft_printf("Input\t\t: This is a test string.\n");
    ft_printf("Output\t\t: ");
    ft_printf("This is a test string.\n\n");

    //Specifier d check
    printf("Test 3\t\t: d\n\n");
    printf("Function\t: Printf\n");
    printf("Input\t\t: 650\n");
    printf("Output\t\t: ");
    printf("%d\n\n", 650);

    ft_printf("Function\t: ft_printf\n");
    ft_printf("Input\t\t: 650\n");
    ft_printf("Output\t\t: ");
    ft_printf("%d\n\n", 650);

    printf("Function\t: Printf\n");
    printf("Input\t\t: -650\n");
    printf("Output\t\t: ");
    printf("%d\n\n", -650);

    ft_printf("Function\t: ft_printf\n");
    ft_printf("Input\t\t: -650\n");
    ft_printf("Output\t\t: ");
    ft_printf("%d\n\n", -650);

    //Specifier +d check
    printf("Test 4\t\t: +d\n\n");
    printf("Function\t: Printf\n");
    printf("Input\t\t: 650\n");
    printf("Output\t\t: ");
    printf("%+d\n\n", 650);

    ft_printf("Function\t: ft_printf\n");
    ft_printf("Input\t\t: 650\n");
    ft_printf("Output\t\t: ");
    ft_printf("%+d\n\n", 650);

    //Specifier +1d check
    printf("Test 5\t\t: +1d\n\n");
    printf("Function\t: Printf\n");
    printf("Input\t\t: 650\n");
    printf("Output\t\t: ");
    printf("%+1d\n\n", 650);

    ft_printf("Function\t: ft_printf\n");
    ft_printf("Input\t\t: 650\n");
    ft_printf("Output\t\t: ");
    ft_printf("%+1d\n\n", 650);

    //Specifier +10d check
    printf("Test 6\t\t: +10d\n\n");
    printf("Function\t: Printf\n");
    printf("Input\t\t: 650\n");
    printf("Output\t\t: ");
    printf("%+10d\n\n", 650);

    ft_printf("Function\t: ft_printf\n");
    ft_printf("Input\t\t: 650\n");
    ft_printf("Output\t\t: ");
    ft_printf("%+10d\n\n", 650);

    printf("Function\t: Printf\n");
    printf("Input\t\t: -650\n");
    printf("Output\t\t: ");
    printf("%+10d\n\n", -650);

    ft_printf("Function\t: ft_printf\n");
    ft_printf("Input\t\t: -650\n");
    ft_printf("Output\t\t: ");
    ft_printf("%+10d\n\n", -650);

    //Specifier 10d check
    printf("Test 7\t\t: 10d\n\n");
    printf("Function\t: Printf\n");
    printf("Input\t\t: 650\n");
    printf("Output\t\t: ");
    printf("%10d\n\n", 650);

    ft_printf("Function\t: ft_printf\n");
    ft_printf("Input\t\t: 650\n");
    ft_printf("Output\t\t: ");
    ft_printf("%10d\n\n", 650);

    //Specifier -10d check
    printf("Test 8\t\t: -10d\n\n");
    printf("Function\t: Printf\n");
    printf("Input\t\t: 650\n");
    printf("Output\t\t: ");
    printf("%-10d\n\n", 650);

    ft_printf("Function\t: ft_printf\n");
    ft_printf("Input\t\t: 650\n");
    ft_printf("Output\t\t: ");
    ft_printf("%-10d\n\n", 650);

    //Specifier _d check
    printf("Test 9\t\t: (space)_d\n\n");
    printf("Function\t: Printf\n");
    printf("Input\t\t: 650\n");
    printf("Output\t\t: ");
    printf("% d\n\n", 650);

    ft_printf("Function\t: ft_printf\n");
    ft_printf("Input\t\t: 650\n");
    ft_printf("Output\t\t: ");
    ft_printf("% d\n\n", 650);

    printf("Function\t: Printf\n");
    printf("Input\t\t: -650\n");
    printf("Output\t\t: ");
    printf("% d\n\n", -650);

    ft_printf("Function\t: ft_printf\n");
    ft_printf("Input\t\t: -650\n");
    ft_printf("Output\t\t: ");
    ft_printf("% d\n\n", -650);

    //Specifier _5d check
    printf("Test 10\t\t: (space)_5d\n\n");
    printf("Function\t: Printf\n");
    printf("Input\t\t: 650\n");
    printf("Output\t\t: ");
    printf("% 5d\n\n", 650);

    ft_printf("Function\t: ft_printf\n");
    ft_printf("Input\t\t: 650\n");
    ft_printf("Output\t\t: ");
    ft_printf("% 5d\n\n", 650);

    //Specifier 05d check
    printf("Test 11\t\t: 05d\n\n");
    printf("Function\t: Printf\n");
    printf("Input\t\t: -650\n");
    printf("Output\t\t: ");
    printf("%05d\n\n", -650);

    ft_printf("Function\t: ft_printf\n");
    ft_printf("Input\t\t: -650\n");
    ft_printf("Output\t\t: ");
    ft_printf("%05d\n\n", -650);

    //Specifier +05d check
    printf("Test 12\t\t: +05d\n\n");
    printf("Function\t: Printf\n");
    printf("Input\t\t: -650\n");
    printf("Output\t\t: ");
    printf("%+05d\n\n", -650);

    ft_printf("Function\t: ft_printf\n");
    ft_printf("Input\t\t: -650\n");
    ft_printf("Output\t\t: ");
    ft_printf("%+05d\n\n", -650);

    //Specifier -05d check
//    printf("Test 13\t\t: -05d\n\n");
//    printf("Function\t: Printf\n");
//    printf("Input\t\t: -650\n");
//    printf("Output\t\t: ");
//    printf("%-05d\n\n", -650);
//
//    ft_printf("Function\t: ft_printf\n");
//    ft_printf("Input\t\t: -650\n");
//    ft_printf("Output\t\t: ");
//    ft_printf("%-05d\n\n", -650);

    //Specifier +-05d check
//    printf("Test 14\t\t: +-05d\n\n");
//    printf("Function\t: Printf\n");
//    printf("Input\t\t: -650\n");
//    printf("Output\t\t: ");
//    printf("%+-05d\n\n", -650);
//
//    ft_printf("Function\t: ft_printf\n");
//    ft_printf("Input\t\t: -650\n");
//    ft_printf("Output\t\t: ");
//    ft_printf("%+-05d\n\n", -650);

    //Specifier +-1d check
    printf("Test 15\t\t: +-1d\n\n");
    printf("Function\t: Printf\n");
    printf("Input\t\t: -650\n");
    printf("Output\t\t: ");
    printf("%+-1d\n\n", -650);

    ft_printf("Function\t: ft_printf\n");
    ft_printf("Input\t\t: -650\n");
    ft_printf("Output\t\t: ");
    ft_printf("%+-1d\n\n", -650);

    //Specifier +01d check
    printf("Test 16\t\t: +01d\n\n");
    printf("Function\t: Printf\n");
    printf("Input\t\t: -650\n");
    printf("Output\t\t: ");
    printf("%+01d\n\n", -650);

    ft_printf("Function\t: ft_printf\n");
    ft_printf("Input\t\t: -650\n");
    ft_printf("Output\t\t: ");
    ft_printf("%+01d\n\n", -650);

    //Specifier u check
    printf("Test 17\t\t: u\n\n");
    printf("Function\t: Printf\n");
    printf("Input\t\t: 650\n");
    printf("Output\t\t: ");
    printf("%u\n\n", 650);

    ft_printf("Function\t: ft_printf\n");
    ft_printf("Input\t\t: 650\n");
    ft_printf("Output\t\t: ");
    ft_printf("%u\n\n", 650);

    //Specifier u check
    printf("Test 18\t\t: u\n\n");
    printf("Function\t: Printf\n");
    printf("Input\t\t: 4000000000\n");
    printf("Output\t\t: ");
    printf("%u\n\n", 4000000000);

    ft_printf("Function\t: ft_printf\n");
    ft_printf("Input\t\t: 4000000000\n");
    ft_printf("Output\t\t: ");
    ft_printf("%u\n\n", 4000000000);

    //Specifier u check
    printf("Test 18\t\t: u\n\n");
    printf("Function\t: Printf\n");
    printf("Input\t\t: -650\n");
    printf("Output\t\t: ");
    printf("%u\n\n", -650);

    ft_printf("Function\t: ft_printf\n");
    ft_printf("Input\t\t: -650\n");
    ft_printf("Output\t\t: ");
    ft_printf("%u\n\n", -650);

    //Specifier +-u check
    printf("Test 19\t\t: +-u\n\n");
    printf("Function\t: Printf\n");
    printf("Input\t\t: 12345\n");
    printf("Output\t\t: ");
    printf("%+-u\n\n", 12345);

    ft_printf("Function\t: ft_printf\n");
    ft_printf("Input\t\t: 12345\n");
    ft_printf("Output\t\t: ");
    ft_printf("%+-u\n\n", 12345);

    //Specifier +10u check
    printf("Test 20\t\t: +10u\n\n");
    printf("Function\t: Printf\n");
    printf("Input\t\t: 12345\n");
    printf("Output\t\t: ");
    printf("%+10u\n\n", 12345);

    ft_printf("Function\t: ft_printf\n");
    ft_printf("Input\t\t: 12345\n");
    ft_printf("Output\t\t: ");
    ft_printf("%+10u\n\n", 12345);

    //Specifier s check
    printf("Test 21\t\t: s\n\n");
    printf("Function\t: Printf\n");
    printf("Input\t\t: N/A\n");
    printf("Output\t\t: ");
    printf("%s\n\n", "");

    ft_printf("Function\t: ft_printf\n");
    ft_printf("Input\t\t: N/A\n");
    ft_printf("Output\t\t: ");
    ft_printf("%s\n\n", "");

    //Specifier s check
    printf("Test 22\t\t: s\n\n");
    printf("Function\t: Printf\n");
    printf("Input\t\t: NULL\n");
    printf("Output\t\t: ");
    printf("%s\n\n", NULL);

    ft_printf("Function\t: ft_printf\n");
    ft_printf("Input\t\t: NULL\n");
    ft_printf("Output\t\t: ");
    ft_printf("%s\n\n", NULL);

    //Specifier 10s check
    printf("Test 23\t\t: 10s\n\n");
    printf("Function\t: Printf\n");
    printf("Input\t\t: N/A\n");
    printf("Output\t\t: ");
    printf("%10s\n\n", "");

    ft_printf("Function\t: ft_printf\n");
    ft_printf("Input\t\t: N/A\n");
    ft_printf("Output\t\t: ");
    ft_printf("%10s\n\n", "");

    //Specifier s check
    printf("Test 24\t\t: s\n\n");
    printf("Function\t: Printf\n");
    printf("Input\t\t: Coconut\n");
    printf("Output\t\t: ");
    printf("%s\n\n", "Coconut");

    ft_printf("Function\t: ft_printf\n");
    ft_printf("Input\t\t: Coconut\n");
    ft_printf("Output\t\t: ");
    ft_printf("%s\n\n", "Coconut");

    //Specifier (space)s check
    printf("Test 25\t\t: (space)s\n\n");
    printf("Function\t: Printf\n");
    printf("Input\t\t: Coconut\n");
    printf("Output\t\t: ");
    printf("% s\n\n", "Coconut");

    ft_printf("Function\t: ft_printf\n");
    ft_printf("Input\t\t: Coconut\n");
    ft_printf("Output\t\t: ");
    ft_printf("% s\n\n", "Coconut");

    //Specifier (space)4s check
    printf("Test 26\t\t: (space)4s\n\n");
    printf("Function\t: Printf\n");
    printf("Input\t\t: Co\n");
    printf("Output\t\t: ");
    printf("% 4s\n\n", "Co");

    ft_printf("Function\t: ft_printf\n");
    ft_printf("Input\t\t: Co\n");
    ft_printf("Output\t\t: ");
    ft_printf("% 4s\n\n", "Co");

    //Specifier -4s check
    printf("Test 27\t\t: -4s\n\n");
    printf("Function\t: Printf\n");
    printf("Input\t\t: Co\n");
    printf("Output\t\t: ");
    printf("%-4s\n\n", "Co");

    ft_printf("Function\t: ft_printf\n");
    ft_printf("Input\t\t: Co\n");
    ft_printf("Output\t\t: ");
    ft_printf("%-4s\n\n", "Co");

    //Specifier +4s check
    printf("Test 28\t\t: +4s\n\n");
    printf("Function\t: Printf\n");
    printf("Input\t\t: Co\n");
    printf("Output\t\t: ");
    printf("%+4s\n\n", "Co");

    ft_printf("Function\t: ft_printf\n");
    ft_printf("Input\t\t: Co\n");
    ft_printf("Output\t\t: ");
    ft_printf("%+4s\n\n", "Co");

    //Specifier 10s check
    printf("Test 29\t\t: 10s\n\n");
    printf("Function\t: Printf\n");
    printf("Input\t\t: Coco\n");
    printf("Output\t\t: ");
    printf("%10s\n\n", "Coco");

    ft_printf("Function\t: ft_printf\n");
    ft_printf("Input\t\t: Coco\n");
    ft_printf("Output\t\t: ");
    ft_printf("%10s\n\n", "Coco");

    //Specifier c check
    printf("Test 30\t\t: c\n\n");
    printf("Function\t: Printf\n");
    printf("Input\t\t: a\n");
    printf("Output\t\t: ");
    printf("%c\n\n", 'a');

    ft_printf("Function\t: ft_printf\n");
    ft_printf("Input\t\t: a\n");
    ft_printf("Output\t\t: ");
    ft_printf("%c\n\n", 'a');

    //Specifier 10c check
    printf("Test 31\t\t: 10c\n\n");
    printf("Function\t: Printf\n");
    printf("Input\t\t: a\n");
    printf("Output\t\t: ");
    printf("%10c\n\n", 'a');

    ft_printf("Function\t: ft_printf\n");
    ft_printf("Input\t\t: a\n");
    ft_printf("Output\t\t: ");
    ft_printf("%10c\n\n", 'a');

    //Specifier +10c check
    printf("Test 32\t\t: +10c\n\n");
    printf("Function\t: Printf\n");
    printf("Input\t\t: a\n");
    printf("Output\t\t: ");
    printf("%+10c\n\n", 'a');

    ft_printf("Function\t: ft_printf\n");
    ft_printf("Input\t\t: a\n");
    ft_printf("Output\t\t: ");
    ft_printf("%+10c\n\n", 'a');

    //Specifier 010c check
    printf("Test 33\t\t: 010c\n\n");
    printf("Function\t: Printf\n");
    printf("Input\t\t: a\n");
    printf("Output\t\t: ");
    printf("%010c\n\n", 'a');

    ft_printf("Function\t: ft_printf\n");
    ft_printf("Input\t\t: a\n");
    ft_printf("Output\t\t: ");
    ft_printf("%010c\n\n", 'a');

    //Specifier +-10c check
    printf("Test 34\t\t: +-10c\n\n");
    printf("Function\t: Printf\n");
    printf("Input\t\t: a\n");
    printf("Output\t\t: ");
    printf("%+-10c\n\n", 'a');

    ft_printf("Function\t: ft_printf\n");
    ft_printf("Input\t\t: a\n");
    ft_printf("Output\t\t: ");
    ft_printf("%+-10c\n\n", 'a');

    //Specifier 0+10c check
    printf("Test 35\t\t: 0+10c\n\n");
    printf("Function\t: Printf\n");
    printf("Input\t\t: a\n");
    printf("Output\t\t: ");
    printf("%0+10c\n\n", 'a');

    ft_printf("Function\t: ft_printf\n");
    ft_printf("Input\t\t: a\n");
    ft_printf("Output\t\t: ");
    ft_printf("%0+10c\n\n", 'a');

    //Specifier o check
    printf("Test 36\t\t: o\n\n");
    printf("Function\t: Printf\n");
    printf("Input\t\t: 2048\n");
    printf("Output\t\t: ");
    printf("%o\n\n", 2048);

    ft_printf("Function\t: ft_printf\n");
    ft_printf("Input\t\t: 2048\n");
    ft_printf("Output\t\t: ");
    ft_printf("%o\n\n", 2048);

    //Specifier (space)o check
    printf("Test 37\t\t: (space)o\n\n");
    printf("Function\t: Printf\n");
    printf("Input\t\t: 777\n");
    printf("Output\t\t: ");
    printf("% o\n\n", 777);

    ft_printf("Function\t: ft_printf\n");
    ft_printf("Input\t\t: 777\n");
    ft_printf("Output\t\t: ");
    ft_printf("% o\n\n", 777);

    //Specifier +o check
    printf("Test 38\t\t: +o\n\n");
    printf("Function\t: Printf\n");
    printf("Input\t\t: 128\n");
    printf("Output\t\t: ");
    printf("%+o\n\n", 128);

    ft_printf("Function\t: ft_printf\n");
    ft_printf("Input\t\t: 128\n");
    ft_printf("Output\t\t: ");
    ft_printf("%+o\n\n", 128);

    //Specifier -o check
    printf("Test 39\t\t: -o\n\n");
    printf("Function\t: Printf\n");
    printf("Input\t\t: 48\n");
    printf("Output\t\t: ");
    printf("%-o\n\n", 48);

    ft_printf("Function\t: ft_printf\n");
    ft_printf("Input\t\t: 48\n");
    ft_printf("Output\t\t: ");
    ft_printf("%-o\n\n", 48);

    //Specifier -5o check
    printf("Test 40\t\t: -5o\n\n");
    printf("Function\t: Printf\n");
    printf("Input\t\t: 2048\n");
    printf("Output\t\t: ");
    printf("%-5o\n\n", 2048);

    ft_printf("Function\t: ft_printf\n");
    ft_printf("Input\t\t: 2048\n");
    ft_printf("Output\t\t: ");
    ft_printf("%-5o\n\n", 2048);

    //Specifier +10o check
    printf("Test 41\t\t: +10o\n\n");
    printf("Function\t: Printf\n");
    printf("Input\t\t: 2048\n");
    printf("Output\t\t: ");
    printf("%+10o\n\n", 2048);

    ft_printf("Function\t: ft_printf\n");
    ft_printf("Input\t\t: 2048\n");
    ft_printf("Output\t\t: ");
    ft_printf("%+10o\n\n", 2048);

    //Specifier 010o check
    printf("Test 42\t\t: 010o\n\n");
    printf("Function\t: Printf\n");
    printf("Input\t\t: 2048\n");
    printf("Output\t\t: ");
    printf("%010o\n\n", 2048);

    ft_printf("Function\t: ft_printf\n");
    ft_printf("Input\t\t: 2048\n");
    ft_printf("Output\t\t: ");
    ft_printf("%010o\n\n", 2048);

    //Specifier -+10o check
    printf("Test 43\t\t: -+10o\n\n");
    printf("Function\t: Printf\n");
    printf("Input\t\t: 2048\n");
    printf("Output\t\t: ");
    printf("%-+10o\n\n", 2048);

    ft_printf("Function\t: ft_printf\n");
    ft_printf("Input\t\t: 2048\n");
    ft_printf("Output\t\t: ");
    ft_printf("%-+10o\n\n", 2048);

    //Specifier -0+10o check
    printf("Test 44\t\t: -0+10o\n\n");
    printf("Function\t: Printf\n");
    printf("Input\t\t: 2048\n");
    printf("Output\t\t: ");
    printf("%-0+10o\n\n", 2048);

    ft_printf("Function\t: ft_printf\n");
    ft_printf("Input\t\t: 2048\n");
    ft_printf("Output\t\t: ");
    ft_printf("%-0+10o\n\n", 2048);

    //Specifier #o check
    printf("Test 45\t\t: #o\n\n");
    printf("Function\t: Printf\n");
    printf("Input\t\t: 48\n");
    printf("Output\t\t: ");
    printf("%#o\n\n", 48);

    ft_printf("Function\t: ft_printf\n");
    ft_printf("Input\t\t: 48\n");
    ft_printf("Output\t\t: ");
    ft_printf("%#o\n\n", 48);

    //Specifier #+10o check
    printf("Test 46\t\t: #+10o\n\n");
    printf("Function\t: Printf\n");
    printf("Input\t\t: 2048\n");
    printf("Output\t\t: ");
    printf("%#+10o\n\n", 2048);

    ft_printf("Function\t: ft_printf\n");
    ft_printf("Input\t\t: 2048\n");
    ft_printf("Output\t\t: ");
    ft_printf("%#+10o\n\n", 2048);

    //Specifier #-0+10o check
    printf("Test 47\t\t: #-0+10o\n\n");
    printf("Function\t: Printf\n");
    printf("Input\t\t: 2048\n");
    printf("Output\t\t: ");
    printf("%#-0+10o\n\n", 2048);

    ft_printf("Function\t: ft_printf\n");
    ft_printf("Input\t\t: 2048\n");
    ft_printf("Output\t\t: ");
    ft_printf("%#-0+10o\n\n", 2048);

    //Specifier -0#+10o check
    printf("Test 48\t\t: -0#+10o\n\n");
    printf("Function\t: Printf\n");
    printf("Input\t\t: 2048\n");
    printf("Output\t\t: ");
    printf("%-0#+10o\n\n", 2048);

    ft_printf("Function\t: ft_printf\n");
    ft_printf("Input\t\t: 2048\n");
    ft_printf("Output\t\t: ");
    ft_printf("%-0#+10o\n\n", 2048);

    //Specifier o check
    printf("Test 49\t\t: o\n\n");
    printf("Function\t: Printf\n");
    printf("Input\t\t: 02047\n");
    printf("Output\t\t: ");
    printf("%o\n\n", 02047);

    ft_printf("Function\t: ft_printf\n");
    ft_printf("Input\t\t: 02047\n");
    ft_printf("Output\t\t: ");
    ft_printf("%o\n\n", 02047);

    //Specifier x check
    printf("Test 50\t\t: x\n\n");
    printf("Function\t: Printf\n");
    printf("Input\t\t: 16\n");
    printf("Output\t\t: ");
    printf("%x\n\n", 16);

    ft_printf("Function\t: ft_printf\n");
    ft_printf("Input\t\t: 16\n");
    ft_printf("Output\t\t: ");
    ft_printf("%x\n\n", 16);

    //Specifier x check
    printf("Test 51\t\t: x\n\n");
    printf("Function\t: Printf\n");
    printf("Input\t\t: 2048\n");
    printf("Output\t\t: ");
    printf("%x\n\n", 2048);

    ft_printf("Function\t: ft_printf\n");
    ft_printf("Input\t\t: 2048\n");
    ft_printf("Output\t\t: ");
    ft_printf("%x\n\n", 2048);

    //Specifier x check
    printf("Test 52\t\t: x\n\n");
    printf("Function\t: Printf\n");
    printf("Input\t\t: 16777215\n");
    printf("Output\t\t: ");
    printf("%x\n\n", 16777215);

    ft_printf("Function\t: ft_printf\n");
    ft_printf("Input\t\t: 16777215\n");
    ft_printf("Output\t\t: ");
    ft_printf("%x\n\n", 16777215);

    //Specifier X check
    printf("Test 53\t\t: X\n\n");
    printf("Function\t: Printf\n");
    printf("Input\t\t: 6777215\n");
    printf("Output\t\t: ");
    printf("%X\n\n", 6777215);

    ft_printf("Function\t: ft_printf\n");
    ft_printf("Input\t\t: 6777215\n");
    ft_printf("Output\t\t: ");
    ft_printf("%X\n\n", 6777215);

    //Specifier #x check
    printf("Test 54\t\t: #x\n\n");
    printf("Function\t: Printf\n");
    printf("Input\t\t: 16777215\n");
    printf("Output\t\t: ");
    printf("%#x\n\n", 16777215);

    ft_printf("Function\t: ft_printf\n");
    ft_printf("Input\t\t: 16777215\n");
    ft_printf("Output\t\t: ");
    ft_printf("%#x\n\n", 16777215);

    //Specifier #X check
    printf("Test 55\t\t: #X\n\n");
    printf("Function\t: Printf\n");
    printf("Input\t\t: 1677725\n");
    printf("Output\t\t: ");
    printf("%#X\n\n", 1677725);

    ft_printf("Function\t: ft_printf\n");
    ft_printf("Input\t\t: 1677725\n");
    ft_printf("Output\t\t: ");
    ft_printf("%#X\n\n", 1677725);

    //Specifier #+x check
    printf("Test 56\t\t: #+x\n\n");
    printf("Function\t: Printf\n");
    printf("Input\t\t: 1777215\n");
    printf("Output\t\t: ");
    printf("%#+x\n\n", 1777215);

    ft_printf("Function\t: ft_printf\n");
    ft_printf("Input\t\t: 1777215\n");
    ft_printf("Output\t\t: ");
    ft_printf("%#+x\n\n", 1777215);

    //Specifier #-X check
    printf("Test 57\t\t: #-X\n\n");
    printf("Function\t: Printf\n");
    printf("Input\t\t: 16215\n");
    printf("Output\t\t: ");
    printf("%#-X\n\n", 16215);

    ft_printf("Function\t: ft_printf\n");
    ft_printf("Input\t\t: 16215\n");
    ft_printf("Output\t\t: ");
    ft_printf("%#-X\n\n", 16215);

    int     tmpInt;

    tmpInt = 25;
    //Specifier p check
    printf("Test 58\t\t: p\n\n");
    printf("Function\t: Printf\n");
    printf("Input\t\t: &tmpInt\n");
    printf("Output\t\t: ");
    printf("%p\n\n", &tmpInt);

    ft_printf("Function\t: ft_printf\n");
    ft_printf("Input\t\t: &tmpInt\n");
    ft_printf("Output\t\t: ");
    ft_printf("%p\n\n", &tmpInt);

    //Specifier 10p check
    printf("Test 59\t\t: 10p\n\n");
    printf("Function\t: Printf\n");
    printf("Input\t\t: &tmpInt\n");
    printf("Output\t\t: ");
    printf("%10p\n\n", &tmpInt);

    ft_printf("Function\t: ft_printf\n");
    ft_printf("Input\t\t: &tmpInt\n");
    ft_printf("Output\t\t: ");
    ft_printf("%10p\n\n", &tmpInt);
    return (0);
}