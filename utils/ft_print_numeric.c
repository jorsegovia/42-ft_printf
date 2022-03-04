/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numeric.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsegovia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 11:21:29 by jsegovia          #+#    #+#             */
/*   Updated: 2022/03/04 11:21:31 by jsegovia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_printnbr(int n)
{
    int     length;
    char	*number;

	len = 0;
	number = ft_itoa(n);
	len = ft_printstr(number);
	free(number);
	return (len);
}

int ft_print_unsigned(va_arg(args, unsigned int))
{
    int length;

	return (len);
}

int ft_print_hex(va_arg(args, unsigned int), format)
{
    int length;
    
	return (len);
}
