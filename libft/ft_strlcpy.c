/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nveneros <nveneros@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 14:32:23 by nveneros          #+#    #+#             */
/*   Updated: 2024/10/27 14:45:37 by nveneros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <bsd/string.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	length_src;

	i = 0;
	length_src = ft_strlen((char *)src);
	if (size == 0)
		return (length_src);
	while (src[i] && i < (size -1))
	{
		dst[i] = src[i];
		i++;
	}
	if (i < size)
		dst[i] = '\0';
	return (length_src);
}

// void	test(char *dst, char *src, char *dst_test, char *src_test, size_t size)
// {
// 	printf("______TEST_____\n");
// 	printf("input : %s\n", dst);
// 	int	length_test = strlcpy(dst_test, src_test, size);
// 	int	length= ft_strlcpy(dst, src, size);
// 	printf("expected : %s | return length: %d\n", dst_test, length_test);	
// 	printf("result : %s | return length: %d\n\n", dst, length);	
// }

// int	main(void)
// {
// 	char dest[500];
// 	char dest_test[500];
// 	char src[] = "salut";
// 	char src_test[] = "salut";
// 	test(dest, src, dest_test, src_test, sizeof(dest));

// 	char dest_1[80];
// 	char dest_test_1[80];
// 	char src_1[] = "123456789 salut";
// 	char src_test_1[] = "123456789 salut";
// 	test(dest_1, src_1, dest_test_1, src_test_1, sizeof(dest_1));

// 	char dest_2[6];
// 	char dest_test_2[6];
// 	char src_2[] = "salut je fais un test";
// 	char src_test_2[] = "salut je fais un test";
// 	test(dest_2, src_2, dest_test_2, src_test_2, sizeof(dest_2));

// 	char dest_3[1500];
// 	char dest_test_3[1500];
// 	char src_3[] = "";
// 	char src_test_3[] = "";
// 	test(dest_3, src_3, dest_test_3, src_test_3, sizeof(dest_3));

// 	char dest_4[20];
// 	char dest_test_4[20];
// 	char src_4[] = "aaa";
// 	char src_test_4[] = "aaa";
// 	test(dest_4, src_4, dest_test_4, src_test_4, 0);
// 	return (0);
// }