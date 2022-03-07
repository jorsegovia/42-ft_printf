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

int	ft_getlen(int num, int base)
{
	int	length;

	length = 0;
	while (num != 0)
	{
		length++;
		num = num / base;
	}
	return (num);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		isneg;
	size_t	len;
	long	num;

	num = n;
	isneg = (n < 0);
	len = ft_getlen(num, 10);
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[len--] = '\0';
	if (isneg)
	{
		str[0] = '-';
		num = num * -1;
	}
	if (num == 0)
		str[0] = '0';
	while (num > 0)
	{
		str[len--] = num % 10 + '0';
		num /= 10;
	}
	return (str);
}

int	ft_get_arg(va_list args, const char format)
{
	int	lenght;

	lenght = 0;
	if (format == 'c')
		lenght += ft_print_char(va_arg(args, int));
	else if (format == 's')
		lenght += ft_print_str(va_arg(args, char *));
	else if (format == 'p')
		lenght += ft_print_ptr(va_arg(args, unsigned long long));
	else if (format == 'd' || format == 'i')
		lenght += ft_print_nbr(va_arg(args, int));
	else if (format == 'u')
		lenght += ft_print_unsigned(va_arg(args, unsigned int));
	else if (format == 'x' || format == 'X')
		lenght += ft_print_hex(va_arg(args, unsigned int), format);
	else if (format == '%')
		lenght += ft_print_char('%');
	return (lenght);
}

//33	: single char
//35	: string
//37	: pointer as hexa
//39	: decimal or int as base 10
//41	: unsigned as base 10
//43	: hexa as upper or lowercase
//45	: percent sign