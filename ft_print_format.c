/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_format.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylabser <ylabser@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 20:42:15 by ylabser           #+#    #+#             */
/*   Updated: 2024/12/05 18:44:57 by ylabser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_format(va_list ap, char sp)
{
	int	count;

	count = 0;
	if (sp == 'c')
		count += ft_print_char(va_arg(ap, int));
	else if (sp == 's')
		count += ft_print_str(va_arg(ap, char *));
	else if (sp == 'p')
		count += ft_print_ptr(va_arg(ap, void *));
	else if (sp == 'd' || sp == 'i')
		count += ft_print_digit(va_arg(ap, int));
	else if (sp == 'u')
		count += ft_print_unsigned(va_arg(ap, unsigned int));
	else if (sp == 'x' || sp == 'X')
		count += ft_print_hex(va_arg(ap, unsigned int), sp);
	else if (sp == '%')
		count += ft_print_char(sp);
	else
		count += write(1, &sp, 1);
	return (count);
}
