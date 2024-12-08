/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylabser <ylabser@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 20:42:00 by ylabser           #+#    #+#             */
/*   Updated: 2024/11/22 10:23:11 by ylabser          ###   ########.fr       */
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
		num = num / 10;
	}
	return (len);
}

int	ft_print_unsigned(unsigned int n)
{
	int	count ;

	count = ft_num_len(n);
	if (n >= 10)
	{
		ft_print_unsigned(n / 10);
		ft_print_unsigned(n % 10);
	}
	else
		ft_print_char(n + '0');
	return (count);
}
