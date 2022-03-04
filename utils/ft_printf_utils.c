/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsegovia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 11:05:55 by jsegovia          #+#    #+#             */
/*   Updated: 2022/03/04 11:05:57 by jsegovia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_put_arg(va_list args, const char s)
{
	int	lenght;

	lenght = 0;
	if (format == 'c')							//single char
		lenght += ft_printchar(va_arg(args, int));
	else if (format == 's')						//string
		lenght += ft_printstr(va_arg(args, char *));
	else if (format == 'p')						//pointer as hexa
		lenght += ft_print_ptr(va_arg(args, unsigned long long));
	else if (format == 'd' || format == 'i')	//decimal or int as base 10
		lenght += ft_printnbr(va_arg(args, int));
	else if (format == 'u')						//unsigned as base 10
		lenght += ft_print_unsigned(va_arg(args, unsigned int));
	else if (format == 'x' || format == 'X')	//hexa as upper or lowercase
		lenght += ft_print_hex(va_arg(args, unsigned int), format);
	else if (format == '%')						//percent sign
		lenght += ft_putchar('%');
	return (lenght);
}
