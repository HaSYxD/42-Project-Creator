/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aliaudet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 16:31:15 by aliaudet          #+#    #+#             */
/*   Updated: 2023/10/23 10:09:55 by aliaudet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	char	*buff;
	size_t	i;

	buff = (char *)s;
	i = 0;
	while (i < n)
	{
		buff[i] = (char)c;
		i++;
	}
	return (buff);
}
