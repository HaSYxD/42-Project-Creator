/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsnbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aliaudet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 11:59:27 by aliaudet          #+#    #+#             */
/*   Updated: 2023/11/09 09:27:23 by aliaudet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putunsnbr(unsigned int nbr, int *i)
{
	if (nbr <= 9)
	{
		ft_putchar('0' + nbr, i);
	}
	if (nbr > 9)
	{
		ft_putnbr(nbr / 10, i);
		ft_putnbr(nbr % 10, i);
	}
}
