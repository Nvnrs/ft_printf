/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nveneros <nveneros@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 11:46:14 by nveneros          #+#    #+#             */
/*   Updated: 2024/10/22 10:25:04 by nveneros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;

	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

// void	c_to_zero(unsigned int i, char *c)
// {
// 	*c = '0';
// }

// int	main(void)
// {
// 	char	str[] = "salut";
// 	ft_striteri(str, c_to_zero);
// 	printf("%s", str);
// 	return (0);
// }