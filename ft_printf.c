/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nveneros <nveneros@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 10:48:07 by nveneros          #+#    #+#             */
/*   Updated: 2024/10/30 18:58:04 by nveneros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/* TREATEMENT FUNCTION*/

int	treatment_char(va_list *ap)
{
	char c;

	c = va_arg(*ap, unsigned int);
	ft_putchar_fd(c, 1);
	return 1;
}
int	treatment_str(va_list *ap)
{
	char *s;
	int	length;

	s = va_arg(*ap, char *);
	ft_putstr_fd(s, 1);
	length = ft_strlen(s);
	return (length);
}

int	treatment_int(va_list *ap)
{
	int	nb;
	int length;

	nb = va_arg(*ap, int);
	ft_putnbr_fd(nb, 1);
	length = cft_length_nbr(nb);
	return length;
}

int	treatment_unsigned_int(va_list *ap, char format)
{
	char			config;
	char			*hex;
	unsigned int	nb;
	unsigned int	length;

	nb = va_arg(*ap, unsigned int);
	length = 0;
	if (format == 'u')
	{
		length = cft_length_nbr(nb);
		cft_putnbr_fd(nb, 1);
	} 
	else if (format == 'x' || format == 'X')
	{
		if (format == 'x')
			config = CONFIG_LOWER;
		else
			config = CONFIG_UPPER;
		hex = cft_dec_to_hex(nb, config);
		length = ft_strlen(hex);
		ft_putstr_fd(hex, 1);
		free(hex);
	} 
	return (length);
}


int	treatment_percent()
{
	ft_putchar_fd('%', 1);
	return 1;
}

/* MAIN  FUNCTION*/


int ft_printf(const char *format, ...)
{
	size_t	i;
	int		length;
	va_list ap;

	i = 0;
	length = 0;
	va_start(ap, format);
	while (format[i])
	{
		if (check_format(&format[i], FORMAT_C))
			length += treatment_char(&ap);
		else if (check_format(&format[i], FORMAT_S))
			length += treatment_str(&ap);
		else if (check_format(&format[i], FORMATS_INT))
			length += treatment_int(&ap);
		else if (check_format(&format[i], FORMATS_UINT))
			length += treatment_unsigned_int(&ap, format[i + 1]);
		else if (check_format(&format[i], "%"))
			length += treatment_percent();
		else
		{
			ft_putchar_fd(format[i], 1);
			length++;
			i++;
			continue;
		}
		i+=2;
	}
	va_end(ap);
	
	return (length);
}

int	main(void)
{
	int	length;
	int	length_real;
	
	// %s
	printf("____TEST  %%s\n");
	length = ft_printf("output: %s\n", "CHAINE_S");
	length_real = printf("expected: %s\n\n", "CHAINE_S");

	// %c
	printf("____TEST %%c\n");
	length = ft_printf("output: %c\n", 'c');
	length_real = printf("expected: %c\n\n", 'c');

	// %i
	printf("____TEST %%d\n");
	length = ft_printf("output: %d\n", -2147483647);
	length_real = printf("expected: %d\n\n", -2147483647);

	printf("____TEST %%i\n");
	length = ft_printf("output: %i\n", 2147483647);
	length_real = printf("expected: %i\n\n", 2147483647);

	// %u
	printf("____TEST %%u\n");
	length = ft_printf("output: %u\n", 4294967295U);
	length_real = printf("expected: %u\n\n", 4294967295U);

	// %x
	printf("____TEST %%x\n");
	length = ft_printf("output: %x\n", 58);
	length_real = printf("expected: %x\n\n", 58);

	// %X
	printf("____TEST %%X\n");
	length = ft_printf("output: %X\n", 455);
	length_real = printf("expected: %X\n\n", 455);

	//  A VOIR
	printf("____TEST %%\n");
	length = ft_printf("output: %%\n");
	length_real = printf("expected: %%\n\n");
	
	
	//  A VOIR
	printf("____TEST \n");
	length = ft_printf("output: %v\n");
	length_real = printf("expected: %v\n\n");
	

	return (0);
}
