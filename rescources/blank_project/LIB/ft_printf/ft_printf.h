/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aliaudet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 08:44:52 by aliaudet          #+#    #+#             */
/*   Updated: 2023/11/09 09:51:55 by aliaudet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

# define UPPERCASE	"0123456789ABCDEF"
# define LOWERCASE	"0123456789abcdef"

void	ft_putchar(char c, int *i);
void	ft_putstr(const char *str, int *i);
void	ft_putnbr(int nbr, int *i);
void	ft_putunsnbr(unsigned int nbr, int *i);
void	ft_puthexnbr(unsigned long nbr, int *i, char type);
void	ft_putptr(unsigned long long nbr, int *i);

int		ft_printf(const char *str, ...);

#endif
