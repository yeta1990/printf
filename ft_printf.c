/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albgarci <albgarci@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 13:57:52 by albgarci          #+#    #+#             */
/*   Updated: 2021/10/05 10:30:43 by albgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	va_list	ap;
	int		c;
	char	*strimpr;
	char	*str2;
	size_t	i;
	size_t	k;

	i = 0;
	k = 0;
	strimpr = 0;
	str2 = (char *)str;
	va_start(ap, str);
	while (str2 && i < ft_strlen(str))
	{
		if (*str2 != '%')
		{
			ft_putchar_fd(*str2, 1);
			i++;
			k++;
			str2++;
		}
		else if (*str2 == '%')
		{
			str2++;
			if (*str2 == 'c')
			{
				c = va_arg(ap, int);
				ft_putchar_fd(c, 1);
				k++;
			}
			else if (*str2 == 's')
			{
				strimpr = va_arg(ap, char *);
				k += ft_putstr_fd(strimpr, 1);
			}
			else if (*str2 == 'i')
			{
				c = va_arg(ap, int);
				k += ft_putnbr_fd(c, 1);
			}
			else if (*str2 == 'x')
			{
				c = va_arg(ap, int);
				k += ft_putnbr_base(c, "0123456789abcdef");
			}
			else if (*str2 == 'X')
			{
				c = va_arg(ap, int);
				k += ft_putnbr_base(c, "0123456789ABCDEF");
			}
			else if (*str2 == '%')
			{
				k++;
				ft_putchar_fd('%', 1);
			}
			str2++;
			i += 2;
		}
	}
	str2 = 0;
	va_end(ap);
	return (k);
}
