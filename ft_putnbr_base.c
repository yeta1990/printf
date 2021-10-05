/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albgarci <albgarci@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 11:44:00 by albgarci          #+#    #+#             */
/*   Updated: 2021/10/05 17:46:38 by albgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

void	recurs(unsigned long long nbr, char *base, int base_length, size_t *len);
int		ft_duplchar(char *str);

unsigned long long	ft_putnbr_base(unsigned long long nbr, char *base)
{
	int				base_length;
	unsigned int	number;
	size_t			len;

	len = 0;
	base_length = 0;
	number = 0;
	while (base[base_length])
	{
		if (base[base_length] == 43 || base[base_length] == 45)
			return (len);
		base_length++;
	}
	if (nbr == 0)
	{
		write(1, &base[nbr % base_length], 1);
		return (1);
	}
	if (nbr < 0)
		return (ft_putnbr_base(4294967296 + nbr, base));
	else
		number = nbr;
	recurs(number, base, base_length, &len);
	return (len);
}

void	recurs(unsigned long long nbr, char *base, int base_length, size_t *len)
{
	if (nbr > 0)
	{
		(*len)++;
		recurs(nbr / base_length, base, base_length, len);
		write(1, &base[nbr % base_length], 1);
	}
}
