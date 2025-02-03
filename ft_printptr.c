/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printptr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansuarez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 14:12:18 by ansuarez          #+#    #+#             */
/*   Updated: 2025/02/03 12:07:18 by ansuarez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

void	ft_printchar_fd(char c, int fd);

int	ft_ptr_len(uintptr_t num)
{
	int	len;

	len = 0;
	if (num == 0)
		return (1);
	while (num != 0)
	{
		len++;
		num = num / 16;
	}
	return (len);
}

void	ft_put_ptr(uintptr_t num)
{
	if (num == 0)
	{
		ft_printchar_fd('0', 1);
		return ;
	}
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

int	ft_printptr(uintptr_t ptr)
{
	int	lenght;

	if (ptr == 0)
	{
		lenght = write(1, "(nil)", 5);
		return (lenght);
	}
	lenght = 0;
	lenght += write(1, "0x", 2);
	ft_put_ptr(ptr);
	lenght += ft_ptr_len(ptr);
	return (lenght);

