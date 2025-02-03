/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansuarez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 12:54:04 by ansuarez          #+#    #+#             */
/*   Updated: 2025/01/28 13:34:47 by ansuarez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_printhex(unsigned int nr, char *base)
{
	int		nr_base[16];
	int		i;
	int		result;

	i = 0;
	result = 0;
	if (nr == 0)
		result += ft_printchar('0');
	while (nr)
	{
		nr_base[i] = nr % 16;
		nr = nr / 16;
		i++;
	}
	while (--i >= 0)
		result += ft_printchar(base[nr_base[i]]);
	return (result);
}
/*
int main()
{
    char *base = "0123456789abcdef"; // Base para hexadecimal en minúsculas

    // Probar ft_printhex con varios números
    ft_printhex(42, base);        // Imprime 2a
    ft_printchar('\n');
    ft_printhex(255, base);       // Imprime ff
    ft_printchar('\n');
    ft_printhex(0, base);         // Imprime 0
    ft_printchar('\n');
    ft_printhex(123456, base);    // Imprime 1e240
    ft_printchar('\n');
    ft_printhex(987654321, base); // Imprime 3ade68b1
    ft_printchar('\n');

    return 0;
}
*/
