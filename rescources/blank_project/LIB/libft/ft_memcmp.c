/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aliaudet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 13:38:19 by aliaudet          #+#    #+#             */
/*   Updated: 2023/10/23 14:45:48 by aliaudet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*buff1;
	unsigned char	*buff2;

	buff1 = (unsigned char *)s1;
	buff2 = (unsigned char *)s2;
	while (n)
	{
		if (*buff1 != *buff2)
			return (*buff1 - *buff2);
		buff1++;
		buff2++;
		n--;
	}
	return (0);
}
