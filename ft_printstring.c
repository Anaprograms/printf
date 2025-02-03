/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printstring.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansuarez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 11:17:55 by ansuarez          #+#    #+#             */
/*   Updated: 2025/01/29 12:40:50 by ansuarez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_strlen( const char *str);

int	ft_printstring(char *str)
{
	int	len;

	if (!str)
		str = "(null)";
	len = ft_strlen(str);
	return (write(1, str, len));
}
/*
int main()
{
    ft_putstr("Hola Mundo\n");  
    ft_putstr(NULL);            
    ft_putstr("¡Prueba exitosa!\n"); 
    return 0;
}
*/
