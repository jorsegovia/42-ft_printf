/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsegovia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 10:17:49 by jsegovia          #+#    #+#             */
/*   Updated: 2022/03/04 10:17:51 by jsegovia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

//# include "libft.h"
# include <stdarg.h>

int		ft_printf(const char *, ...);
//printf_utils.c
int		ft_getlen(int n, int b);
int		ft_get_arg(va_list args, const char s);
//printf_char.c
int		ft_print_char(int c);
int		ft_print_str(char *str);
//print_numeric.c
int		ft_print_nbr(int n);
char	*ft_uitoa(unsigned int n);
int		ft_print_unsigned(unsigned int uns);
void	ft_put_hex(unsigned int hex, const char format);
int		ft_print_hex(unsigned int hex, const char format);
//print_pointer.c
void	ft_print_pointer(unsigned long ptr);
int		ft_print_ptr(unsigned long ptr);

#endif
