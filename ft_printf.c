/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albgarci <albgarci@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 13:57:52 by albgarci          #+#    #+#             */
/*   Updated: 2021/10/04 15:59:11 by albgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_printf(const char *str, ...)
{
	va_list	ap;
	int		c;

	va_start(ap, str);
	c = va_arg(ap, int);
//	str = 0;	
	ft_putchar_fd(c, 1);
	va_end(ap);
	return (1);
}
