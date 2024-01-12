/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexnbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aliaudet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 09:00:46 by aliaudet          #+#    #+#             */
/*   Updated: 2023/11/09 09:51:19 by aliaudet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_puthexnbr(unsigned long nbr, int *i, char type)
{
	if (nbr <= 15)
	{
		if (type == 'x')
			ft_putchar(LOWERCASE[nbr], i);
		else if (type == 'X')
			ft_putchar(UPPERCASE[nbr], i);
	}
	if (nbr > 15)
	{
		ft_puthexnbr(nbr / 16, i, type);
		ft_puthexnbr(nbr % 16, i, type);
	}
}
