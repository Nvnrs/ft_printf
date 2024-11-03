/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nveneros <nveneros@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 08:08:59 by nveneros          #+#    #+#             */
/*   Updated: 2024/10/23 10:49:14 by nveneros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*cast_s1;
	unsigned char	*cast_s2;

	i = 0;
	cast_s1 = (unsigned char *)s1;
	cast_s2 = (unsigned char *)s2;
	while (i < n)
	{
		if (cast_s1[i] != cast_s2[i])
			return (cast_s1[i] - cast_s2[i]);
		i++;
	}
	return (0);
}

// void	print_tab_int(int *tab, int length)
// {
// 	int	i;

// 	i = 0;
// 	while (i < length)
// 	{
// 		printf("%d ", tab[i]);
// 		i++;
// 	}
// 	printf("\n");
// }

// int test = 1;
// void	test_str(char *s1, char *s2, size_t n)
// {
// 	printf("___TEST %d___\n", test);
// 	printf("s1: %s\n", s1);
// 	printf("s2: %s\n", s2);
// 	printf("n: %zu\n", n);
// 	printf("expected : %d\n", memcmp(s1, s2, n));
// 	printf("result : %d\n", ft_memcmp(s1, s2, n));
// 	printf("\n");
// 	test++;
// }

// void	test_tab_int(int *s1, int *s2, size_t n)
// {
// 	printf("___TEST %d___\n", test);
// 	printf("tab1:");
// 	print_tab_int(s1, n / sizeof(int));
// 	printf("tab2:");
// 	print_tab_int(s2, n / sizeof(int));
// 	printf("n: %zu\n", n);
// 	printf("expected : %d\n", memcmp(s1, s2, n));
// 	printf("result : %d\n", ft_memcmp(s1, s2, n));
// 	printf("\n");
// 	test++;
// }

// int	main(void)
// {
// 	test_str("aaa", "aa", 2);
// 	test_str("aaa", "aa", 3);
// 	test_str("", "", 5);

// 	int tab1[] = {1, 1, 1, 1};
// 	int tab2[] = {1, 1, 1, 1};
// 	test_tab_int(tab1, tab2, 4 * sizeof(int));
// 	return (0);
// }