/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hvercell <hvercell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 18:00:53 by hvercell          #+#    #+#             */
/*   Updated: 2023/01/27 17:08:51 by hvercell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

int		ft_printf(const char *format, ...);
void	ft_printc(char c);
void	ft_prints(char *s);
size_t	ft_printp(size_t p);
void	ft_printdi(int n);
void	ft_printu(unsigned int u);
void	ft_printx(unsigned int x);
void	ft_printX(unsigned int X);

size_t	ft_strlen(char *s);
#endif