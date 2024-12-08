/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_digit.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylabser <ylabser@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 20:42:20 by ylabser           #+#    #+#             */
/*   Updated: 2024/11/22 10:21:27 by ylabser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

static int	ft_num_len(int num)
{
	int	len;

	len = 0;
	if (num == 0)
		return (1);
	while (num != 0)
	{
		len++;
		num = num / 10;
	}
	return (len);
}

int	ft_print_digit(int n)
{
	int		count;
	long	nb;

	nb = n;
	count = 0;
	if (nb < 0)
	{
		count += write(1, "-", 1);
		nb = -nb;
	}
	if (nb >= 10)
	{
		ft_print_digit(nb / 10);
		ft_print_digit(nb % 10);
	}
	else
		ft_print_char(nb + '0');
	count += ft_num_len(nb);
	return (count);
}
