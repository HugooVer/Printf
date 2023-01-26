/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printdi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hvercell <hvercell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 22:21:02 by hvercell          #+#    #+#             */
/*   Updated: 2023/01/26 22:56:11 by hvercell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printdi(int di)
{
	size_t	c;
	size_t	nbr;

	nbr = di;
	if (di < 0)
	{
		ft_printc('-');
		nbr = -(long) di;
	}
	if (nbr < 10)
	{
		c = nbr % 10 + 48;
		ft_printc(c);
	}
	else
	{
		ft_printdi(nbr / 10);
		ft_printdi(nbr % 10);
	}
}
