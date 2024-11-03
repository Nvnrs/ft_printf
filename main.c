/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nveneros <nveneros@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 13:52:56 by nveneros          #+#    #+#             */
/*   Updated: 2024/11/03 16:50:10 by nveneros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

#include "limits.h"

int	main(void)
{
	int	length;
	int	length_real;

	length = 0;
	length_real = 0;
	// %s
	// printf("____TEST  %%s\n");
	// length = ft_printf("OTP: %s\n", NULL);
	// length_real = printf("EXP: %s\n", NULL);
	// printf("\n");
	// printf("length : %d\n", length);
	// printf("length real : %d\n", length_real);

	// // %c
	// printf("____TEST %%c\n");
	// length = ft_printf("OTP: %c\n", 'a');
	// length_real = printf("EXP: %c\n", 'b');
	// printf("length : %d\n", length);
	// printf("length real : %d\n", length_real);

	// // %id
	// printf("____TEST %%d\n");
	// length = ft_printf("   %d  ", 0);
	// length_real = printf("   %d  ", 0);
	// printf("length : %d\n", length);
	// printf("length real : %d\n", length_real);

	// printf("____TEST %%i\n");
	// length = ft_printf("output: %i\n", 2147483647);
	// length_real = printf("expected: %i\n\n", 2147483647);
	// printf("length : %d\n", length);
	// printf("length real : %d\n", length_real);

	// // %u
	// printf("____TEST %%u\n");
	// length = ft_printf("output: %u\n", 4294967295U);
	// length_real = printf("expected: %u\n\n", 4294967295U);
	// printf("length : %d\n", length);
	// printf("length real : %d\n", length_real);

	// // %x
	// printf("____TEST %%x\n");
	// length = ft_printf("output: %x\n", 58);
	// length_real = printf("expected: %x\n\n", 58);
	// printf("length : %d\n", length);
	// printf("length real : %d\n", length_real);

	// // %X
	// printf("____TEST %%X\n");
	// length = ft_printf("output: %X\n", 455);
	// length_real = printf("expected: %X\n\n", 455);
	// printf("length : %d\n", length);
	// printf("length real : %d\n", length_real);

	// //  A VOIR
	// printf("____TEST %%\n");
	// length = ft_printf("output: %%\n");
	// length_real = printf("expected: %%\n\n");
	// printf("length : %d\n", length);
	// printf("length real : %d\n", length_real);

	//  %p
	// long test = LONG_MIN;
	// printf("____TEST %%p\n");
	// length += ft_printf("OTP: %p\n", NULL);
	// length_real += printf("EXP: %p\n", NULL);
	// printf("length : %d\n", length);
	// printf("length real : %d\n", length_real);
	return (0);
}