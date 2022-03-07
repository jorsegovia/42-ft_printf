/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_char.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsegovia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 11:21:46 by jsegovia          #+#    #+#             */
/*   Updated: 2022/03/04 11:21:47 by jsegovia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"
#include <stdlib.h>

int	ft_print_char(int c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_print_str(char *str)
{
	int	length;
	int	count;

	count = -1;
	length = 0;
	if (str == NULL)
	{
		ft_print_char("(null)");
		return (6);
	}
	while (str[count++])
		length += ft_print_char(str[count]);
	return (length);
}
