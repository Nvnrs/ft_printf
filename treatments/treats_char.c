/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   treats_char.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nveneros <nveneros@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 14:45:49 by nveneros          #+#    #+#             */
/*   Updated: 2024/11/04 11:53:32 by nveneros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"
#define MSG_NULL "(null)"

int	treatment_char(va_list *ap)
{
	char	c;

	c = va_arg(*ap, unsigned int);
	ft_putchar_fd(c, 1);
	return (1);
}

int	treatment_str(va_list *ap)
{
	char	*s;
	int		length;

	s = va_arg(*ap, char *);
	if (s == NULL)
		s = MSG_NULL;
	ft_putstr_fd(s, 1);
	length = ft_strlen(s);
	return (length);
}

int	treatment_percent(void)
{
	ft_putchar_fd('%', 1);
	return (1);
}
