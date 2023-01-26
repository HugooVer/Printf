/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printx.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hvercell <hvercell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 23:06:11 by hvercell          #+#    #+#             */
/*   Updated: 2023/01/27 00:18:12 by hvercell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printx(unsigned int x)
{
	char	*str;

	str = "0123456789abcdef";
	if (x > 0)
	{
		ft_printx(x / 16);
		write(1, &str[x % 16], 1);
	}
}
