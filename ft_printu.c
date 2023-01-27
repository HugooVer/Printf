/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printu.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hvercell <hvercell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 22:29:29 by hvercell          #+#    #+#             */
/*   Updated: 2023/01/27 17:12:31 by hvercell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printu(unsigned int u)
{
	size_t	c;

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
}
