/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nveneros <nveneros@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 15:02:18 by nveneros          #+#    #+#             */
/*   Updated: 2024/10/22 11:54:09 by nveneros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*cs;

	i = 0;
	cs = (unsigned char *)s;
	while (i < n)
	{
		cs[i] = '\0';
		i++;
	}
}

// int	main(void)
// {
// 	char str[] ={97, 97, 97, 97};
// 	int	n = 5;
// 	ft_bzero(str, n);
// 	printf("%s", str);
// 	return (0);
// }