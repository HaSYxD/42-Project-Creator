/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aliaudet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 10:45:57 by aliaudet          #+#    #+#             */
/*   Updated: 2023/10/23 16:02:58 by aliaudet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	int	i;

	i = 0;
	while (src[i])
		i++;
	if (size == 0)
		return (i);
	if (size > 0)
	{
		while (*src && size > 1)
		{
			*dest++ = *src++;
			size--;
		}
	}
	*dest = '\0';
	return (i);
}
