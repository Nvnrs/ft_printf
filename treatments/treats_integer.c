/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   treats_integer.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nveneros <nveneros@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 14:44:37 by nveneros          #+#    #+#             */
/*   Updated: 2024/11/03 16:18:10 by nveneros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"
# define MSG_NIL "(nil)"

int	treatment_int(va_list *ap)
{
	int	nb;
	int	length;

	nb = va_arg(*ap, int);
	ft_putnbr_fd(nb, 1);
	length = cft_length_nbr(nb);
	return (length);
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
		cft_putnbr_UL_fd(nb, 1);
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

int	treatment_pointer(va_list *ap)
{
	unsigned long	nb;
	char			*hex;
	int				length;

	nb = va_arg(*ap, unsigned long);
	if (nb == 0)
	{
		ft_putstr_fd(MSG_NIL, 1);
		length = ft_strlen(MSG_NIL);
		return (length);
	}
	hex = cft_dec_to_hex(nb, CONFIG_LOWER);
	ft_putstr_fd("0x", 1);
	ft_putstr_fd(hex, 1);
	length = 2;
	length += ft_strlen(hex);
	free(hex);
	return (length);
}
