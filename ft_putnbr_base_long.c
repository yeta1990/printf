/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base_long.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albgarci <albgarci@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 11:44:00 by albgarci          #+#    #+#             */
/*   Updated: 2021/10/06 10:35:40 by albgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

void	recurs2(unsigned long long nbr, char *base, int base_len, size_t *len);

size_t	ft_putnbr_base_long(unsigned long long nbr, char *base)
{
	int				base_len;
//	unsigned int	number;
	size_t			len;

//	printf("\nnbr: %llu", nbr);
	len = 0;
	base_len = 0;
//	number = 0;
	while (base[base_len])
	{
		if (base[base_len] == 43 || base[base_len] == 45)
			return (len);
		base_len++;
	}
	if (nbr == 0)
	{
		write(1, &base[nbr % base_len], 1);
		return (1);
	}
/*	if (nbr < 0)
		return (ft_putnbr_base(4294967296 + nbr, base));
	else
		number = nbr;
*/	recurs2(nbr, base, base_len, &len);
	return (len);
}

void	recurs2(unsigned long long nbr, char *base, int base_len, size_t *len)
{
	if (nbr > 0)
	{
		(*len)++;
		recurs2(nbr / base_len, base, base_len, len);
		write(1, &base[nbr % base_len], 1);
	}
}
