/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aliaudet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 10:06:47 by aliaudet          #+#    #+#             */
/*   Updated: 2023/10/23 10:15:03 by aliaudet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*buff_src;
	char	*buff_dest;
	size_t	i;

	buff_src = (char *)src;
	buff_dest = (char *)dest;
	i = 0;
	if (!buff_src && !buff_dest)
		return (NULL);
	while (i < n)
	{
		buff_dest[i] = buff_src[i];
		i++;
	}
	return (buff_dest);
}
