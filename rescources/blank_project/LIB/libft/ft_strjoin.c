/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aliaudet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 10:49:09 by aliaudet          #+#    #+#             */
/*   Updated: 2023/10/25 11:12:37 by aliaudet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	size_t	len;
	char	*dst;
	int		i;
	int		j;

	i = 0;
	j = ft_strlen(s1);
	len = ft_strlen(s1) + ft_strlen(s2);
	dst = malloc(sizeof(char) * (len + 1));
	if (!dst)
		return (NULL);
	dst[len] = '\0';
	while (s1[i])
	{
		dst[i] = s1[i];
		i++;
	}
	i = 0;
	while (s2[i])
		dst[j++] = s2[i++];
	return (dst);
}
