/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylabser <ylabser@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 20:41:33 by ylabser           #+#    #+#             */
/*   Updated: 2024/12/05 15:58:28 by ylabser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int		count;

	count = 0;
	if (write(1, 0, 0) == -1)
		return (-1);
	va_start(ap, format);
	while (*format != '\0')
	{
		if (*format == '%' && *(format + 1) != '\0')
		{
			format++;
			count += ft_print_format(ap, *format);
		}
		else if (*format != '%')
			count += write(1, format, 1);
		format++;
	}
	va_end(ap);
	return (count);
}
