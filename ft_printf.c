/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albgarci <albgarci@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 13:57:52 by albgarci          #+#    #+#             */
/*   Updated: 2021/10/04 18:38:49 by albgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	va_list	ap;
	int		c;
	char	*str2;
	size_t	i;

	i = 0;
	str2 = (char *)str;
	va_start(ap, str);
	while (str2 && i < ft_strlen(str))
	{
		if (*str2 != '%')
		{
			ft_putchar_fd(*str2, 1);
			i++;
			str2++;
		}
		else if (*str2 == '%')
		{
			str2++;
			if (*str2 == 'c')
			{
				c = va_arg(ap, int);
				ft_putchar_fd(c, 1);
			}
			else if (*str2 == 'i')
			{
				c = va_arg(ap, int);
				ft_putnbr_fd(c, 1);
			}
			else if (*str2 == '%')
				ft_putchar_fd('%', 1);
			str2++;
			i += 2;
		}
	}
	str2 = 0;
	va_end(ap);
	return (1);
}
