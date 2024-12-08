/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylabser <ylabser@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 20:30:29 by ylabser           #+#    #+#             */
/*   Updated: 2024/11/20 22:23:14 by ylabser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int	ft_printf(const char *format, ...);
int	ft_print_format(va_list ap, char sp);
int	ft_print_unsigned(unsigned int n);
int	ft_print_char(char c);
int	ft_print_str(char *str);
int	ft_print_hex(unsigned int n, const char format);
int	ft_print_digit(int n);
int	ft_print_ptr(void *ptr);

#endif
