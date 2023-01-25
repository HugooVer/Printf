/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hvercell <hvercell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 21:54:03 by hvercell          #+#    #+#             */
/*   Updated: 2023/01/25 21:54:27 by hvercell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_strdup(const char *s)
{
	const size_t	len = ft_strlen(s);
	char			*ret;
	size_t			i;

	ret = ft_calloc(len + 1, sizeof(char));
	i = 0;
	if (ret == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		ret[i] = s[i];
		++i;
	}
	return (ret);
}
