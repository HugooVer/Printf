/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hvercell <hvercell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 18:05:13 by hvercell          #+#    #+#             */
/*   Updated: 2023/01/27 23:51:06 by hvercell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_good_formart(char c, void *value)
{
	int	len;

	len = 0;
	if (c == 'c')
		len = ft_printc(value);
	else if (c == 's')
		len = ft_prints((char *)value);
	else if (c == 'p')
		len = ft_printp(value);
	else if (c == 'd' || c == 'i')
		len = ft_printdi((int)value);
	else if (c == 'u')
		len = ft_printu((unsigned int)value);
	else if (c == 'x')
		len = ft_printx((unsigned int)value);
	else if (c == 'X')
		len = ft_printx_((unsigned int)value);
	return (len);
}

int	ft_printf(const char *format, ...)
{	
	int			i;
	int			len;
	const char	flags = "cspdiuxX";
	va_list		args;

	va_start(args, format);
	i = 0;
	len = 0;
	while (format[i] != '\0')
	{
		if (format[i] == '%' && ft_memchr((const void *)flags, format[i + 1], 8) != NULL)
		{
			len += ft_print_good_formart(format[i + 1], va_arg(args, void *));
			++i;
		}
		else
		{
			ft_printc(format[i]);
			++len;
		}
		++i;
	}
	va_end(args);
	return (len);
}
