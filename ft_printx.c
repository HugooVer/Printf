/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printx.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hvercell <hvercell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 23:06:11 by hvercell          #+#    #+#             */
/*   Updated: 2023/01/27 21:56:41 by hvercell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_digit_count(size_t p)
{
	int	len;

	len = 0;
	while (p > 0)
	{
		p = p / 16;
		++len;
	}
	return (len);
}

int	ft_printx(unsigned int x)
{
	char			*str;
	unsigned int	xx;

	xx = x;
	str = "0123456789abcdef";
	if (x > 0)
	{
		ft_printx(x / 16);
		write(1, &str[x % 16], 1);
	}
	return (ft_digit_count(xx));
}
