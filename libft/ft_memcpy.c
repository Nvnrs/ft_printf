/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nveneros <nveneros@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 16:42:41 by nveneros          #+#    #+#             */
/*   Updated: 2024/10/27 12:20:59 by nveneros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*dest_c;
	unsigned char		*src_c;

	if (dest == NULL && src == NULL)
		return (NULL);
	i = 0;
	dest_c = (unsigned char *)dest;
	src_c = (unsigned char *)src;
	while (i < n)
	{
		dest_c[i] = src_c[i];
		i++;
	}
	return (dest);
}

// void	test(char *dest, char *src, size_t n,
// void *(*f)(void*, const void*, size_t))
// {
// 	printf("________TEST________\n");
// 	printf("src : %s\n", src);
// 	printf("dest : %s\n", dest);
// 	printf("n : %zu\n", n);
// 	f(dest, src, n);
// 	printf("-> result : %s\n", dest);
// }

// int	main(void)
// {
// 	// char src[] = "aaaaaaaaa";
// 	// char dest[] = "";
// 	// size_t n = 6;
// 	// test(dest, src, n, ft_memcpy);

// 	// INT TEST
// 	// int src[] = {15, 20, 330, 40};
// 	// int dest[4];
// 	// size_t n = 4 * sizeof(int);cc *.c
// 	// ft_memcpy(dest, src, n);

//     // for (int i = 0; i < 4; i++) {
//     //     printf("new int : %d\n", dest[i]);
//     // }
// 	char *dst = NULL;
// 	char *src = NULL;
// 	test(dst, src, 3, ft_memcpy);

// 	return (0);
// }
