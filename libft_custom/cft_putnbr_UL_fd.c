/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cft_putnbr_UL_fd.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nveneros <nveneros@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 17:12:19 by nveneros          #+#    #+#             */
/*   Updated: 2024/11/03 16:18:25 by nveneros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_custom.h"

void	cft_putnbr_UL_fd(unsigned long nb, int fd)
{
	if (nb >= 10)
	{
		cft_putnbr_UL_fd(nb / 10, fd);
		cft_putnbr_UL_fd(nb % 10, fd);
	}
	else
	{
		ft_putchar_fd(nb + '0', fd);
	}
}
