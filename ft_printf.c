/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nveneros <nveneros@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 10:48:07 by nveneros          #+#    #+#             */
/*   Updated: 2024/11/03 18:05:04 by nveneros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	handle_formats(const char *format, va_list *ap)
{
	int	length;

	length = 0;
	if (check_format(format, FORMAT_C))
		length += treatment_char(ap);
	else if (check_format(format, FORMAT_S))
		length += treatment_str(ap);
	else if (check_format(format, FORMATS_INT))
		length += treatment_int(ap);
	else if (check_format(format, FORMATS_UINT))
		length += treatment_unsigned_int(ap, format[1]);
	else if (check_format(format, FORMAT_POINTER))
		length += treatment_pointer(ap);
	else if (check_format(format, "%"))
		length += treatment_percent();
	return (length);
}

int	ft_printf(const char *format, ...)
{
	size_t	i;
	int		length;
	va_list	ap;

	i = 0;
	length = 0;
	va_start(ap, format);
	while (format[i])
	{
		if (format[i] != '%')
		{
			ft_putchar_fd(format[i], 1);
			length++;
			i++;
			continue ;
		}
		length += handle_formats(&format[i], &ap);
		i += 2;
	}
	va_end(ap);
	return (length);
}