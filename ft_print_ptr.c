/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylabser <ylabser@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 20:42:10 by ylabser           #+#    #+#             */
/*   Updated: 2024/11/22 10:14:45 by ylabser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

static int	ft_num_len(unsigned	long num)
{
	int	len;

	len = 0;
	while (num != 0)
	{
		len++;
		num = num / 16;
	}
	return (len);
}

static void	ft_put_ptr(unsigned long n)
{
	if (n >= 16)
	{
		ft_put_ptr(n / 16);
		ft_put_ptr(n % 16);
	}
	else
	{
		if (n <= 9)
			ft_print_char(n + '0');
		else
			ft_print_char(n - 10 + 'a');
	}
}

int	ft_print_ptr(void *ptr)
{
	int				count;
	unsigned long	adrss;

	count = 0;
	adrss = (unsigned long)ptr;
	count += write(1, "0x", 2);
	if (adrss == 0)
		count += write(1, "0", 1);
	else
	{
		ft_put_ptr(adrss);
		count += ft_num_len(adrss);
	}
	return (count);
}
