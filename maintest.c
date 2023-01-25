/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maintest.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hvercell <hvercell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 23:55:16 by hvercell          #+#    #+#             */
/*   Updated: 2023/01/26 00:19:49 by hvercell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	main(int argc, char **argv)
{
	size_t	i;
	char	**ret;

	(void) argc;
	i = 0;
	ret = ft_split(argv[1], '%');
	while (ret[i] != NULL)
	{
		printf("%s\n", ret[0]);
		++i;
	}
}
