/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printbase10.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansuarez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 13:46:26 by ansuarez          #+#    #+#             */
/*   Updated: 2025/01/28 13:52:51 by ansuarez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_printbase10(int n)
{
	unsigned int	i;

	i = 0;
	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		return (11);
	}
	if (n < 0)
	{
		i += ft_printchar('-');
		n *= -1;
	}
	if (n > 9)
	{
		i += ft_printbase10(n / 10);
		i += ft_printchar(n % 10 + '0');
	}
	else
		i += ft_printchar(n + '0');
	return (i);
}
