/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   .main.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nveneros <nveneros@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 13:52:56 by nveneros          #+#    #+#             */
/*   Updated: 2024/11/04 11:22:47 by nveneros         ###   ########.fr       */
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
	printf("____TEST  %%s\n");
	length = ft_printf("OTP: %s\n", "salut je test");
	length_real = printf("EXP: %s\n", "salut je test");
	printf("\n");
	printf("length : %d\n", length);
	printf("length real : %d\n\n", length_real);

	// %c
	printf("____TEST %%c\n");
	length = ft_printf("OTP: %c%c%c\n", '0', 0,'1');
	length_real = printf("EXP: %c%c%c\n", '0', 0,'1');
	printf("\n");
	printf("length : %d\n", length);
	printf("length real : %d\n\n", length_real);

	// // %id
	printf("____TEST %%d\n");
	length = ft_printf("OTP: %d\n", 55);
	length_real = printf("EXP: %d\n", 55);
	printf("\n");
	printf("length : %d\n", length);
	printf("length real : %d\n\n", length_real);

	printf("____TEST %%i\n");
	length = ft_printf("OTP: %i\n", 2147483647);
	length_real = printf("EXP: %i\n", 2147483647);
	printf("\n");
	printf("length : %d\n", length);
	printf("length real : %d\n\n", length_real);

	// // %u
	printf("____TEST %%u\n");
	length = ft_printf("OTP: %u\n", 4294967295U);
	length_real = printf("EXP: %u\n", 4294967295U);
	printf("\n");
	printf("length : %d\n", length);
	printf("length real : %d\n\n", length_real);
	
	// // %x
	printf("____TEST %%x\n");
	length = ft_printf("OTP: %x\n", 58);
	length_real = printf("EXP: %x\n", 58);
	printf("\n");
	printf("length : %d\n", length);
	printf("length real : %d\n\n", length_real);

	// // %X
	printf("____TEST %%X\n");
	length = ft_printf("OTP: %X\n", 455);
	length_real = printf("EXP: %X\n", 455);
	printf("\n");
	printf("length : %d\n", length);
	printf("length real : %d\n\n", length_real);

	// //  %%
	printf("____TEST %%\n");
	length = ft_printf("OTP: %%\n");
	length_real = printf("EXP: %%\n");
	printf("\n");
	printf("length : %d\n", length);
	printf("length real : %d\n\n", length_real);

	//  %p
	long test = LONG_MIN;
	printf("____TEST %%p\n");
	length += ft_printf("OTP: %p\n", NULL);
	length_real += printf("EXP: %p\n", NULL);
	printf("length : %d\n", length);
	printf("length real : %d\n\n", length_real);
	return (0);
}