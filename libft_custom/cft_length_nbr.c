/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cft_length_nbr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nveneros <nveneros@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 17:41:02 by nveneros          #+#    #+#             */
/*   Updated: 2024/11/03 16:25:46 by nveneros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_custom.h"

unsigned int	cft_length_nbr(long nb)
{
	unsigned int	length;

	length = 0;
	if (nb < 0)
	{
		length++;
		nb = nb * -1;
	}
	while (nb >= 10)
	{
		nb = nb / 10;
		length++;
	}
	length++;
	return (length);
}
