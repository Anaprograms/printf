/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansuarez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 15:42:58 by ansuarez          #+#    #+#             */
/*   Updated: 2025/01/28 16:21:25 by ansuarez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>
# include <stdint.h>

int		ft_printf(char const *format, ...);
int		ft_printchar(int c);
int		ft_printstring(char *str);
int		ft_strlen( const char *str);
void	ft_printchar_fd(char c, int fd);
int		ft_printptr(uintptr_t ptr);
int		ft_printbase10(int n);
int		ft_printunsigned(unsigned int num);
int		ft_printhex(unsigned int nr, char *base);

#endif
