/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cft_dec_to_hex.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nveneros <nveneros@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 17:36:38 by nveneros          #+#    #+#             */
/*   Updated: 2024/11/03 16:02:57 by nveneros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_custom.h"

int	get_length_dec_to_hex(unsigned long nb)
{
	unsigned int	length;

	length = 0 ;
	while (nb / 16)
	{
		nb = nb / 16;
		length++;
	}
	length++;
	return (length);
}

char	figure_to_hex(int figure, char config)
{
	char	output;
	char	*base;

	if (config == CONFIG_LOWER)
		base = ft_strdup("0123456789abcdef");
	else if (config == CONFIG_UPPER)
		base = ft_strdup("0123456789ABCDEF");
	output = base[figure];
	free(base);
	return (output);
}

char	*cft_dec_to_hex(unsigned long nb, char config)
{
	char			*output;
	unsigned int	length;
	unsigned int	i;

	length = get_length_dec_to_hex(nb);
	i = length - 1;
	output = malloc((length + 1) * sizeof(char));
	while (nb / 16)
	{
		output[i] = figure_to_hex(nb % 16, config);
		nb = nb / 16;
		i--;
	}
	output[i] = figure_to_hex(nb % 16, config);
	output[length] = '\0';
	return (output);
}

// int	main(void)
// {
// 	char *test;

// 	test = cft_dec_to_hex(455, CONFIG_UPPER);
// 	printf("%s", test);
// 	free(test);
// }