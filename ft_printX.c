/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printX.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hvercell <hvercell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 23:42:02 by hvercell          #+#    #+#             */
/*   Updated: 2023/01/27 23:43:55 by hvercell         ###   ########.fr       */
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

int	ft_printx_(unsigned int x_)
{
	unsigned int	x_x_;
	char			*str;

	x_x_ = x_;
	str = "0123456789ABCDEF";
	if (x_ > 0)
	{
		ft_printx_(x_ / 16);
		write(1, &str[x_ % 16], 1);
	}
	return (ft_digit_count(x_x_));
}
