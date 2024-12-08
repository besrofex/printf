/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylabser <ylabser@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 21:06:59 by ylabser           #+#    #+#             */
/*   Updated: 2024/11/22 10:23:27 by ylabser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

static int	ft_num_len(unsigned	int num)
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

static void	ft_put_hex(unsigned int n, const char format)
{
	if (n >= 16)
	{
		ft_put_hex(n / 16, format);
		ft_put_hex(n % 16, format);
	}
	else
	{
		if (n <= 9)
			ft_print_char(n + '0');
		else
		{
			if (format == 'x')
				ft_print_char(n - 10 + 'a');
			if (format == 'X')
				ft_print_char(n - 10 + 'A');
		}
	}
}

int	ft_print_hex(unsigned int n, const char format)
{
	if (n == 0)
		write(1, "0", 1);
	else
		ft_put_hex(n, format);
	return (ft_num_len(n));
}
