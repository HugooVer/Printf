/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hvercell <hvercell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 21:50:55 by hvercell          #+#    #+#             */
/*   Updated: 2023/01/27 21:56:21 by hvercell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_put_hex(size_t x)
{
	char	*str;

	str = "0123456789abcdef";
	if (x > 0)
	{
		ft_put_hex(x / 16);
		write(1, &str[x % 16], 1);
	}
}

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

int	ft_printp(size_t p)
{
	if (p == 0)
	{
		ft_prints("(nil)");
		return (5);
	}
	ft_prints("0x");
	ft_put_hex(p);
	return (2 + ft_digit_count(p));
}
