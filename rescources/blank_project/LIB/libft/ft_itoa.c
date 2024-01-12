/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aliaudet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 11:29:01 by aliaudet          #+#    #+#             */
/*   Updated: 2023/10/26 10:29:26 by aliaudet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_strlen(int n)
{
	int	i;

	i = 0;
	if (n == -2147483648)
		return (11);
	if (n == 0)
		return (1);
	if (n < 0)
		i++;
	while (n)
	{
		n /= 10;
		i++;
	}
	return (i);
}

static char	*ft_itoacpy(char *dst, int n, int len)
{
	int	buff;

	buff = 0;
	dst[len] = '\0';
	len--;
	if (n < 0)
	{
		dst[0] = '-';
		n *= -1;
	}
	while (n > 9)
	{
		buff = n % 10;
		n /= 10;
		dst[len] = '0' + buff;
		len--;
	}
	dst[len] = '0' + n;
	return (dst);
}

char	*ft_itoa(int n)
{
	char	*dst;
	int		len;

	len = get_strlen(n);
	if (n == -2147483648)
	{
		dst = malloc(12);
		ft_strlcpy(dst, "-2147483648", 12);
		return (dst);
	}
	else
		dst = malloc(sizeof(char) * (len + 1));
	if (!dst)
		return (NULL);
	dst = ft_itoacpy(dst, n, len);
	return (dst);
}
