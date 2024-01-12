/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aliaudet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 13:30:06 by aliaudet          #+#    #+#             */
/*   Updated: 2023/10/27 09:48:43 by aliaudet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	offset;
	size_t	dst_len;
	size_t	src_len;
	size_t	i;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	offset = dst_len;
	i = 0;
	if (size == 0)
		return (src_len);
	if (dst_len < size - 1 && size > 0)
	{
		while (src[i] && dst_len + i < size - 1)
		{
			dst[offset] = src[i];
			offset++;
			i++;
		}
		dst[offset] = '\0';
	}
	if (dst_len >= size)
		dst_len = size;
	return (dst_len + src_len);
}
