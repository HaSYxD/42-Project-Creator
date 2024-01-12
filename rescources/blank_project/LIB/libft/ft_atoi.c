/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aliaudet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 11:20:42 by aliaudet          #+#    #+#             */
/*   Updated: 2023/10/19 11:51:20 by aliaudet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	neg_count;
	int	pos_count;
	int	res;

	neg_count = 0;
	pos_count = 0;
	res = 0;
	while (*str == ' ' || *str == '\t' || *str == '\r'
		|| *str == '\n' || *str == '\v' || *str == '\f')
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			neg_count++;
		if (*str == '+')
			pos_count++;
		str++;
	}
	while (*str >= '0' && *str <= '9')
		res = res * 10 + *str++ - '0';
	if ((neg_count + pos_count) > 1)
		return (0);
	if (neg_count == 1)
		res = -res;
	return (res);
}
