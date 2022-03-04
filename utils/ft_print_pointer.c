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

int	ft_pointer_length(unsigned long pointer)
{
	int	length;

	return (length);
}

void	ft_print_pointer(unsigned long pointer)
{

}

int	ft_print_ptr(unsigned long pointer)
{
	int	length;

	length = 0;
	length += write(1, "0x", 2);
	if (ptr == 0)
		length += write(1,0,1);
	else
	{
		ft_print_pointer(pointer);
		length += ft_pointer_length(pointer);
	}
	return (length);
}
