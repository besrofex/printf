/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylabser <ylabser@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 20:40:55 by ylabser           #+#    #+#             */
/*   Updated: 2024/11/21 22:26:12 by ylabser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_print_str(char *str)
{
	int	count;

	count = 0;
	if (str == NULL)
		return (ft_print_str("(null)"));
	while (*str)
	{
		count += ft_print_char(*str);
		str++;
	}
	return (count);
}
