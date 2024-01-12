/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aliaudet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 11:14:32 by aliaudet          #+#    #+#             */
/*   Updated: 2023/10/19 16:51:59 by aliaudet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *str, int c)
{
	int	i;

	i = 0;
	while (*str)
	{
		str++;
		i++;
	}
	while ((unsigned char)*str != (unsigned char)c)
	{
		str--;
		if (i < 0)
			return (0);
		i--;
	}
	return ((char *)str);
}
