/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aliaudet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 09:36:53 by aliaudet          #+#    #+#             */
/*   Updated: 2023/11/09 09:47:53 by aliaudet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putptr(unsigned long long nbr, int *i)
{
	if (!nbr)
		ft_putstr("(nil)", i);
	else
	{
		ft_putstr("0x", i);
		ft_puthexnbr(nbr, i, 'x');
	}
}
