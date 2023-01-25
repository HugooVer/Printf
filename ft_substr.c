/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hvercell <hvercell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 21:44:47 by hvercell          #+#    #+#             */
/*   Updated: 2023/01/25 21:45:15 by hvercell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ret;
	size_t	i;

	if (s == NULL)
		return (NULL);
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	if (ft_strlen(s) - start < len)
		len = ft_strlen(s) - start;
	ret = malloc(len * sizeof(char) + 1);
	if (ret == NULL)
		return (NULL);
	i = 0;
	s += start;
	while (i < len)
	{
		ret[i] = s[i];
		++i;
	}
	ret[i] = '\0';
	return (ret);
}
