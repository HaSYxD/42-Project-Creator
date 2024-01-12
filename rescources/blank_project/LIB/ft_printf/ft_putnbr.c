/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aliaudet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 11:59:27 by aliaudet          #+#    #+#             */
/*   Updated: 2023/11/09 09:27:05 by aliaudet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(int nbr, int *i)
{
	if (nbr == -2147483648)
	{
		ft_putstr("-2147483648", i);
		return ;
	}
	if (nbr < 0)
	{
		ft_putchar('-', i);
		nbr *= -1;
	}
	if (nbr >= 0 && nbr <= 9)
	{
		ft_putchar('0' + nbr, i);
	}
	if (nbr > 9)
	{
		ft_putnbr(nbr / 10, i);
		ft_putnbr(nbr % 10, i);
	}
}
