/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aliaudet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 14:55:13 by aliaudet          #+#    #+#             */
/*   Updated: 2023/10/23 15:00:58 by aliaudet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*buff;

	buff = (char *)s;
	while (n)
	{
		if (*buff == (char)c)
			return (buff);
		buff++;
		n--;
	}
	return (NULL);
}
