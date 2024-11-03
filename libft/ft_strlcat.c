/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nveneros <nveneros@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 15:50:56 by nveneros          #+#    #+#             */
/*   Updated: 2024/10/23 10:58:37 by nveneros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <bsd/string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	start;
	size_t	total_length;
	size_t	i;

	i = 0;
	start = ft_strlen(dst);
	total_length = ft_strlen((char *)dst) + ft_strlen((char *)src);
	if (start >= size)
		return (ft_strlen((char *)src) + size);
	while (src[i] && i < (size - start - 1))
	{
		dst[start + i] = src[i];
		i++;
	}
	dst[start + i] = '\0';
	return (total_length);
}

// void	test(char *dst, char *src, char *dst_test, char *src_test, size_t size)
// {
// 	printf("______TEST_____\n");
// 	printf("dest start : %s\n", dst);
// 	printf("src start : %s\n", src);
// 	printf("size %zu\n", size);
// 	int	length_test = strlcat(dst_test, src_test, size);
// 	int	length= ft_strlcat(dst, src, size);
// 	printf("expected : %s | return length: %d\n", dst_test, length_test);	
// 	printf("result : %s | return length: %d\n\n", dst, length);	
// }

// int	main(void)
// {
// 	char dest[500] = "\0";
// 	char dest_test[500] = "\0";
// 	char src[] = "salut";
// 	char src_test[] = "salut";
// 	test(dest, src, dest_test, src_test, sizeof(dest));
//	
// 	char dest1[500] = "\0";
// 	char dest_test1[500] = "\0";
// 	char src1[] = "salut";
// 	char src_test1[] = "salut";
// 	test(dest1, src1, dest_test1, src_test1, 3);
//
// 	char dest3[3] = {'a', 'a', 'a'};
// 	char dest_test3[3] = {'a', 'a', 'a'};
// 	char src3[] = "salut";
// 	char src_test3[] = "salut";
// 	test(dest3, src3, dest_test3, src_test3, sizeof(dest3));
//	
// 	char dest4[1] = "";
// 	char dest_test4[1] = "";
// 	char src4[] = "World";
// 	test(dest4, src4, dest_test4, src4, 2);
// 	return (0);
// }