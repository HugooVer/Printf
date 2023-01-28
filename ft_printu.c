/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printu.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hvercell <hvercell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 22:29:29 by hvercell          #+#    #+#             */
/*   Updated: 2023/01/28 16:31:08 by hvercell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_digit_countu(size_t p)
{
	int	len;

	len = 0;
	while (p > 0)
	{
		p = p / 10;
		++len;
	}
	return (len);
}

int	ft_printu(unsigned int u)
{
	size_t	c;
	int		uu;

	uu = u;
	if (u < 10)
	{
		c = u % 10 + 48;
		ft_printc(c);
	}
	else
	{
		ft_printu(u / 10);
		ft_printu(u % 10);
	}
	return (ft_digit_countu(uu));
}
