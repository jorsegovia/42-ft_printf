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
#include "libft.h"
#include <stdlib.h>

int	ft_print_nbr(int n)
{
	int		length;
	char	*number;

	length = 0;
	number = ft_itoa(n);
	length = ft_print_str(number);
	free(number);
	return (length);
}

char	*ft_uitoa(unsigned int n)
{
	char	*number;
	int		length;

	length = ft_getlen(number, 10);
	number = (char *)malloc(sizeof(char) * (length + 1));
	if (!number)
		return (0);
	number[length] = '\0';
	while (number != 0)
	{
		number[length - 1] = number % 10 + 48;
		number = number / 10;
		length--;
	}
	return (number);
}

int	ft_print_unsigned(unsigned int uns)
{
	int		length;
	char	*number;

	length = 0;
	if (uns == 0)
		length += write(1, "0", 1);
	else
	{
		number = ft_uitoa(uns);
		length += ft_print_str(number);
		free(number);
	}
	return (length);
}

void	ft_put_hex(unsigned int hex, const char format)
{
	if (hex >= 16)
	{
		ft_put_hex(hex / 16, format);
		ft_put_hex(hex % 16, format);
	}
	else
	{
		if (hex <= 9)
			ft_print_char((hex + '0'), 1);
		else
		{
			if (format == 'x')
				ft_print_char((hex - 10 + 'a'), 1);
			if (format == 'X')
				ft_print_char((hex - 10 + 'A'), 1);
		}
	}
}

int	ft_print_hex(unsigned int hex, const char format)
{
	int	length;

	if (hex == 0)
		return (write(1, "0", 1));
	else
		ft_print_hex(hex, format);
	return (ft_getlen(hex, 16));
}
