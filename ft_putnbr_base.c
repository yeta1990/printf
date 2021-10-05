/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albgarci <albgarci@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 11:44:00 by albgarci          #+#    #+#             */
/*   Updated: 2021/10/05 10:48:07 by albgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

size_t	recurs(unsigned int nbr, char *base, int base_length);
int		ft_duplchar(char *str);

size_t	ft_putnbr_base(int nbr, char *base)
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
/*	if (base_length < 2 || ft_duplchar(base) == 0)
		return (len);
*/	if (nbr == 0)
	{
		write(1, &base[nbr % base_length], 1);
		return (1);
	}
	if (nbr < 0)
	{
		write(1, "-", 1);
		number = nbr * -1;
		len++;
	}
	else
		number = nbr;
	len += recurs(number, base, base_length);
	return (len);
}

size_t	recurs(unsigned int nbr, char *base, int base_length)
{
	static size_t	i;

	if (nbr > 0)
	{
		i++;
		recurs(nbr / base_length, base, base_length);
		write(1, &base[nbr % base_length], 1);
	}
	return (i);
}

int	ft_duplchar(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i])
	{
		while (str[j + 1])
		{
			if (str[i] == str[j + 1])
				return (0);
			j++;
		}
		i++;
		j = i;
	}
	return (1);
}
