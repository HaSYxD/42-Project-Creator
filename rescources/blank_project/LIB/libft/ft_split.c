/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aliaudet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 10:55:44 by aliaudet          #+#    #+#             */
/*   Updated: 2023/10/31 09:09:49 by aliaudet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	countw(const char *s, char c)
{
	int	i;
	int	count;
	int	trigger;

	i = 0;
	count = 0;
	trigger = 0;
	while (s[i])
	{
		if (s[i] != c && trigger == 0)
		{
			trigger = 1;
			count++;
		}
		else if (s[i] == c)
			trigger = 0;
		i++;
	}
	return (count);
}

char	*get_splitstrs(const char *s, int start, int end)
{
	char	*dst;
	int		i;

	dst = malloc((end - start + 1) * sizeof(char));
	if (!dst)
		return (NULL);
	i = 0;
	while (start < end)
		dst[i++] = s[start++];
	dst[i] = '\0';
	return (dst);
}

char	**ft_split(const char *s, char c)
{
	char	**split;
	size_t	i;
	size_t	j;
	int		index;

	split = malloc(sizeof(char *) * (countw(s, c) + 1));
	if (!split)
		return (NULL);
	i = 0;
	j = 0;
	index = -1;
	while (i <= ft_strlen(s))
	{
		if (s[i] != c && index < 0)
			index = i;
		else if ((s[i] == c || i == ft_strlen(s)) && index >= 0)
		{
			split[j++] = get_splitstrs(s, index, i);
			index = -1;
		}
		i++;
	}
	split[j] = 0;
	return (split);
}
