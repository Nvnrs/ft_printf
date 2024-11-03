/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nveneros <nveneros@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 10:28:47 by nveneros          #+#    #+#             */
/*   Updated: 2024/10/17 11:41:58 by nveneros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;
	char	*cs;

	i = 0;
	cs = (char *)s;
	while (i < n)
	{
		cs[i] = c;
		i++;
	}
	return (s);
}

// void print_tab(void *s, int length)
// {
// 	int	i;
// 	char *cs;

// 	i = 0;
// 	cs = (char*)s;
// 	while (i < length)
// 	{
// 		printf("%c", *cs);
// 		cs++;
// 		i++;
// 	}
// 	printf("\n");
// }

// void	test(void *str, char c, int n, int length, 
// void *(*cb)(void*, int , size_t))
// {
// 	printf("input :");
// 	print_tab(str, length);
// 	printf("result :");
// 	cb(str, c, n);
// 	print_tab(str, length);
// }

// int	main(void)
// {
// 	int str[] = {98, 98, 98, 98};
// 	int c = 455;
// 	int length = 5;
// 	test(str, c, 3, 5, ft_memset);
// 	return (0);
// }