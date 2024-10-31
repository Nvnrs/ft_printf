/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   format.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nveneros <nveneros@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 12:27:50 by nveneros          #+#    #+#             */
/*   Updated: 2024/10/31 15:26:33 by nveneros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	c_is_in_formats(char c, char *group_formats)
{
	int	i;
	int	find;

	i = 0;
	find = 0;
	while (group_formats[i])
	{
		if (group_formats[i] == c)
			find++;
		i++;
	}
	if (find)
		return (1);
	return (0);
}

int	check_format(const char *str, char *group_formats)
{
	if (*str == '%' && c_is_in_formats(*(++str), group_formats))
		return (1);
	return (0);
}

int	format_is_not_valid(char percent, char format)
{
	int	i;

	if (percent != '%')
		return (0);
	i = 0;
	while (LST_FORMATS[i])
	{
		if (LST_FORMATS[i] == format)
			return (0);
		i++;
	}
	return (1);
}
