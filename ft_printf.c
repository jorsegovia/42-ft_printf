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

	if(printf("%p", ptr) != ft_printf("%p", ptr))
		printf("\nTest failed for ptr");
	else
	{
		printf("\nTest success for ptr with: ");
		ft_printf("%p", ptr);
	}

	if(printf("%i", i) != ft_printf("%i", i))
		printf("\nTest failed for int");
	else
	{
		printf("\nTest success for int with: ");
		ft_printf("%i", i);
	}

	if(printf("%d", i) != ft_printf("%d", i))
		printf("\nTest failed for decimal");
	else
	{
		printf("\nTest success for decimal with: ");
		ft_printf("%d", i);
	}

	if(printf("%u", u) != ft_printf("%u", u))
		printf("\nTest failed for unsigned");
	else
	{
		printf("\nTest success for unsigned with: ");
		ft_printf("%u", u);
	}

	if(printf("%x", h) != ft_printf("%x", h))
		printf("\nTest failed for hexa lowercase");
	else
	{
		printf("\nTest success for hexa lowercase with: ");
		ft_printf("%x", h);
	}

	if(printf("%X", str) != ft_printf("%X", str))
		printf("\nTest failed for hexa uppercase");
	else
	{
		printf("\nTest success for hexa uppercase with: ");
		ft_printf("%X", str);
	}

	printf("\n\n\t --- TEST END ---");

}