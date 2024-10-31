/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nveneros <nveneros@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 10:48:07 by nveneros          #+#    #+#             */
/*   Updated: 2024/10/31 15:31:57 by nveneros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	handle_formats(const char *format, va_list *ap)
{
	int	length;

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

// int	main(void)
// {
// 	int	length;
// 	int	length_real;

// 	// %s
// 	printf("____TEST  %%s\n");
// 	length = ft_printf("output: %s\n", "CHAINE_S");
// 	length_real = printf("expected: %s\n\n", "CHAINE_S");

// 	// %c
// 	printf("____TEST %%c\n");
// 	length = ft_printf("output: %c\n", 'c');
// 	length_real = printf("expected: %c\n\n", 'c');

// 	// %i
// 	printf("____TEST %%d\n");
// 	length = ft_printf("output: %d\n", -2147483647);
// 	length_real = printf("expected: %d\n\n", -2147483647);

// 	printf("____TEST %%i\n");
// 	length = ft_printf("output: %i\n", 2147483647);
// 	length_real = printf("expected: %i\n\n", 2147483647);

// 	// %u
// 	printf("____TEST %%u\n");
// 	length = ft_printf("output: %u\n", 4294967295U);
// 	length_real = printf("expected: %u\n\n", 4294967295U);

// 	// %x
// 	printf("____TEST %%x\n");
// 	length = ft_printf("output: %x\n", 58);
// 	length_real = printf("expected: %x\n\n", 58);

// 	// %X
// 	printf("____TEST %%X\n");
// 	length = ft_printf("output: %X\n", 455);
// 	length_real = printf("expected: %X\n\n", 455);

// 	//  A VOIR
// 	printf("____TEST %%\n");
// 	length = ft_printf("output: %%\n");
// 	length_real = printf("expected: %%\n\n");

// 	//  %p
// 	int test = 10;
// 	printf("____TEST %%p\n");
// 	length = ft_printf("output: %p\n", &test);
// 	length_real = printf("expected: %p\n\n", &test);

// 	return (0);
// }
