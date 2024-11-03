/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nveneros <nveneros@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 18:19:46 by nveneros          #+#    #+#             */
/*   Updated: 2024/10/24 16:38:34 by nveneros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && (s1[i] || s2[i]))
	{
		if ((unsigned char)s1[i] != (unsigned char)s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}
// void	test(char *s1, char *s2, size_t n)
// {
// 	printf("______TEST______\n");
// 	printf("s1 : %s\n", s1);
// 	printf("s2 : %s\n", s2);
// 	printf("nb bytes : %zu\n", n);
// 	printf("expected %d\n", strncmp(s1, s2, n));
// 	printf("result %d\n\n", ft_strncmp(s1, s2, n));
// }

// int	main(void)
// {
// 	test("aaa", "aaa", 3);
// 	test("aaa", "aab", 3);
// 	test("aba", "aaa", 2);
// 	test("aaa", "aaa", 10);
// 	test("aaaaaa", "aaaaaaaaaa", 0);
// 	test("", "aaaaaaaaaa", 1);
// 	test("", "", 0);
// 	test("test", "", 1);
// 	return (0);
// }