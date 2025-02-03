/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansuarez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 16:00:27 by ansuarez          #+#    #+#             */
/*   Updated: 2025/01/29 09:56:33 by ansuarez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	converter(char format, va_list args)
{
	if (format == 'c')
		return (ft_printchar(va_arg(args, int)));
	else if (format == 's')
		return (ft_printstring(va_arg(args, char *)));
	else if (format == 'p')
		return (ft_printptr(va_arg(args, uintptr_t)));
	else if (format == 'd' || format == 'i')
		return (ft_printbase10(va_arg(args, int)));
	else if (format == 'u')
		return (ft_printunsigned(va_arg(args, unsigned int)));
	else if (format == 'x')
		return (ft_printhex(va_arg(args, unsigned int), "0123456789abcdef"));
	else if (format == 'X')
		return (ft_printhex(va_arg(args, unsigned int), "0123456789ABCDEF"));
	else if (format == '%')
		return (ft_printchar('%'));
	return (1);
}

int	ft_printf(char const *format, ...)
{
	va_list	args;
	int		i;
	int		length;

	va_start(args, format);
	i = 0;
	length = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			length += converter(format[i], args);
			i++;
		}
		else
		{
			length += ft_printchar(format[i]);
			i++;
		}
	}
	va_end(args);
	return (length);
}
