/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aliaudet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 15:09:27 by aliaudet          #+#    #+#             */
/*   Updated: 2023/10/19 16:06:42 by aliaudet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*ptdr;
	size_t	i;

	ptdr = malloc(size * nmemb);
	i = 0;
	if (!ptdr)
		return (NULL);
	while (i != (size * nmemb))
	{
		ptdr[i] = 0;
		i++;
	}
	return (ptdr);
}
