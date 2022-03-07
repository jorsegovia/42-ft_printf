/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsegovia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 10:17:43 by jsegovia          #+#    #+#             */
/*   Updated: 2022/03/04 10:17:45 by jsegovia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Requirements:
• Don’t implement the buffer management of the original printf().
• Your function has to handle the following conversions: cspdiuxX%
• Your function will be compared against the original printf().
• You must use the command ar to create your library.
	Using the libtool command is forbidden.
• Your libftprintf.a has to be created at the root of your repository

You have to implement the following conversions:
• %c Prints a single character.
• %s Prints a string (as defined by the common C convention).
• %p The void * pointer argument has to be printed in hexadecimal format.
• %d Prints a decimal (base 10) number.
• %i Prints an integer in base 10.
• %u Prints an unsigned decimal (base 10) number.
• %x Prints a number in hexadecimal (base 16) lowercase format.
• %X Prints a number in hexadecimal (base 16) uppercase format.
• %% Prints a percent sign.
*/

#include "ft_printf.h"

int	ft_printf(const char *, ...)
{
	int		count;
	int		lenght;
	va_list	args;

	count = 0;
	length = 0;
	va_start(args, str);
	while (s[count])
	{
		if (s[count] == '%')
			lenght += ft_get_arg(args, s[count++]);
		else
			lenght += ft_print_char(s[count]);
		count++;
	}
	va_end(args);
	return (length);
}

int main (void)
{
	char c = "A";
	char *str = "ABCDEEFG"
	char *ptr = malloc(32);
	int i = 15263;
	unsigned int u = 789456;
	int h = 4862159;

	printf("\n\n\t --- TEST START ---");

	if(printf("%c", c) != ft_printf("%c", c))
		printf("\nTest failed for char");
	else
	{
		printf("\nTest success for char with: ");
		ft_printf("%c", c);
	}

	if(printf("%s", str) != ft_printf("%s", str))
		printf("\nTest failed for str");
	else
	{
		printf("\nTest success for str with: ");
		ft_printf("%s", str);
	}


	printf("\n\n\t --- TEST END ---");

}