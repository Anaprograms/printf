/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansuarez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 13:27:06 by ansuarez          #+#    #+#             */
/*   Updated: 2025/02/03 12:01:43 by ansuarez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
test ft_printchar
#include <unistd.h>
#include <stdio.h>

char	ft_printchar(char c, int *counter)
{
	return(write(1, &c, 1));
}
int main(void)
{
    int counter = 0;  
    int result;

    result = ft_printchar('A', &counter);
    if (result == 0)
    {
        printf("\nCarácter impreso correctamente.\n");
    }
    else
    {
        printf("\nError al imprimir el carácter.\n");
    }
 	printf("Contador después de imprimir: %d\n", counter);
 	return (0);
}

//test ft_printhex
#include <unistd.h>
#include <stdio.h>
int	ft_printchar(int c)
{
	return (write (1, &c, 1));
}
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

//test ft_printprt.c

#include <stdio.h>
#include <unistd.h>

void	ft_printchar_fd(char c, int fd)
	{
		write(fd, &c, 1);
	}
int	ft_ptr_len(unsigned long num)
{
	int	len;

	len = 0;
	if (num == 0)
		return (0);
	while (num != 0)
	{
		len++;
		num = num / 16;
	}
	return (len);
}

void	ft_put_ptr(unsigned long num)
{
	if (num >= 16)
	{
		ft_put_ptr(num / 16);
		ft_put_ptr(num % 16);
	}
	else
	{
		if (num <= 9)
			ft_printchar_fd((num + '0'), 1);
		else
			ft_printchar_fd((num - 10 + 'a'), 1);
	}
}

int	ft_printptr(unsigned long ptr)
{
	int	lenght;

	lenght = 0;
	lenght += write(1, "0x", 2);
	if (ptr == 0)
		lenght += write(1, "0", 1);
	else
	{
		ft_put_ptr(ptr);
		lenght += ft_ptr_len(ptr);
	}
	return (lenght);
}

int main() {
    // Ejemplo 1: Puntero a una variable
    int num = 42;
    int *ptr1 = &num;
    printf("Puntero 1: ");
    ft_printptr((unsigned long)ptr1);  // Debería imprimir la dirección de memoria de 'ptr1' en hexadecimal.
    printf("\n");

    // Ejemplo 2: Puntero NULL
    int *ptr2 = NULL;
    printf("Puntero 2: ");
    ft_printptr((unsigned long)ptr2);  // Debería imprimir "0x0" para un puntero NULL.
    printf("\n");

    // Ejemplo 3: Puntero a otra variable
    char letra = 'A';
    char *ptr3 = &letra;
    printf("Puntero 3: ");
    ft_printptr((unsigned long)ptr3);  // Debería imprimir la dirección de memoria de 'ptr3' en hexadecimal.
    printf("\n");

    return 0;
}
*/

#include "ft_printf.h"
int	main(void)
{
	int	ret;

	ret = ft_printf("%p %p\n", NULL, NULL);
	printf("ret: %d", ret);
//	ret = ft_printf("%p %p\n", 0x123, 0x123);
//	printf("ret: %d", ret);
	
}
