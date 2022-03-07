/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_pointer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsegovia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 11:47:53 by jsegovia          #+#    #+#             */
/*   Updated: 2022/03/04 11:47:57 by jsegovia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"
#include <stdlib.h>

void	ft_print_pointer(unsigned long ptr)
{
	if (num >= 16)
	{
		ft_print_pointer(num / 16);
		ft_print_pointer(num % 16);
	}
	else
	{
		if (num <= 9)
			ft_putchar_fd((num + '0'), 1);
		else
			ft_putchar_fd((num - 10 + 'a'), 1);
	}
}

int	ft_print_ptr(unsigned long ptr)
{
	int	length;

	length = 0;
	length += write(1, "0x", 2);
	if (ptr == 0)
		length += write(1,0,1);
	else
	{
		ft_print_pointer(ptr);
		length += ft_getlen(ptr, 16);
	}
	return (length);
}
