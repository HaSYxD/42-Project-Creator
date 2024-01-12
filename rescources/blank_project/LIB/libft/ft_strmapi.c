/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aliaudet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 15:13:15 by aliaudet          #+#    #+#             */
/*   Updated: 2023/10/31 09:05:08 by aliaudet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	size_t			len;
	char			*dst;

	i = 0;
	if (!s)
		return (NULL);
	len = ft_strlen(s);
	dst = malloc(sizeof(char) * (len + 1));
	if (!dst)
		return (NULL);
	dst[len] = '\0';
	while (s[i])
	{
		dst[i] = f(i, s[i]);
		i++;
	}
	return (dst);
}
