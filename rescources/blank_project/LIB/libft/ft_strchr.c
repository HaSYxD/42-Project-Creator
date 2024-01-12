/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aliaudet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 09:10:38 by aliaudet          #+#    #+#             */
/*   Updated: 2023/10/19 16:53:31 by aliaudet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	unsigned char	*buff;

	buff = (unsigned char *)str;
	while (*buff != (unsigned char)c)
	{
		if (*buff == '\0')
			return (NULL);
		buff++;
	}
	return ((char *)buff);
}
