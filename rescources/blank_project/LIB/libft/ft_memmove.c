/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aliaudet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 15:07:08 by aliaudet          #+#    #+#             */
/*   Updated: 2023/10/27 09:51:22 by aliaudet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*cdst;
	unsigned char	*csrc;
	size_t			i;

	cdst = (unsigned char *)dest;
	csrc = (unsigned char *)src;
	if (!dest && !src && n > 0)
		return (NULL);
	if (cdst > csrc && cdst < csrc + n)
	{
		i = n;
		while (i-- > 0)
			cdst[i] = csrc[i];
	}
	else
	{
		i = -1;
		while (++i < n)
			cdst[i] = csrc[i];
	}
	return (dest);
}
