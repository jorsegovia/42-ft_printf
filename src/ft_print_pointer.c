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

void	ft_print_pointer(unsigned long ptr)
{
	if (ptr >= 16)
	{
		ft_print_pointer(ptr / 16);
		ft_print_pointer(ptr % 16);
	}
	else
	{
		if (ptr <= 9)
			ft_print_char(ptr + '0');
		else
			ft_print_char(ptr - 10 + 'a');
	}
}

int	ft_print_ptr(unsigned long ptr)
{
	int	length;

	length = 0;
	length += write(1, "0x", 2);
	if (ptr == 0)
		length += write(1, 0, 1);
	else
	{
		ft_print_pointer(ptr);
		length += ft_getlen(ptr, 16);
	}
	return (length);
}
