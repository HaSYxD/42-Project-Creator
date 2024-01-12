/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aliaudet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 08:54:19 by aliaudet          #+#    #+#             */
/*   Updated: 2023/11/09 09:51:44 by aliaudet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	get_type(va_list args, char c, int *i)
{
	if (c == 'c')
		ft_putchar(va_arg(args, int), i);
	else if (c == 's')
		ft_putstr(va_arg(args, char *), i);
	else if (c == 'p')
		ft_putptr(va_arg(args, unsigned long long), i);
	else if (c == 'd')
		ft_putnbr(va_arg(args, int), i);
	else if (c == 'i')
		ft_putnbr(va_arg(args, int), i);
	else if (c == 'u')
		ft_putunsnbr(va_arg(args, unsigned int), i);
	else if (c == 'x')
		ft_puthexnbr(va_arg(args, unsigned int), i, c);
	else if (c == 'X')
		ft_puthexnbr(va_arg(args, unsigned int), i, c);
	else if (c == '%')
		ft_putchar('%', i);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		i;

	i = 0;
	va_start(args, str);
	while (*str)
	{
		if (*str == '%')
		{
			get_type(args, *(str + 1), &i);
			str++;
		}
		else
			ft_putchar(*str, &i);
		str++;
	}
	return (i);
}
