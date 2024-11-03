/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nveneros <nveneros@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 1324/10/16 18:31:41 by nveneros          #+#    #+#             */
/*   Updated: 2024/10/27 14:46:25 by nveneros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include "bsd/string.h"

static int	find_little_with_start(const char *big, const char *little,
size_t start, size_t len)
{
	size_t	i;

	i = 0;
	while (big[start + i] && (start + i) < len
		&& big[start + i] == little[i])
		i++;
	if (i == ft_strlen(little))
		return (1);
	return (0);
}

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;

	i = 0;
	if (ft_strlen((char *)little) == 0)
		return ((char *)big);
	while (i < len && big[i])
	{
		if (find_little_with_start(big, little, i, len))
			return ((char *)&big[i]);
		i++;
	}
	return (NULL);
}

// void	test(char *big, char *little, size_t len)
// {
// 	printf("_______TEST______\n");
// 	printf("big: %s\n", big);
// 	printf("little: %s\n", little);
// 	printf("len: %zu\n", len);
// 	printf("expected : %s\n", strnstr(big, little, len));
// 	printf("result : %s\n\n", ft_strnstr(big, little, len));
// }

// int	main(void)
// {
// 	test("salut je test", "test", 13);
// 	test("salut je test", "s", 10);
// 	test("salut je test", "salut", 0);
// 	test("salut je test", "sallllut", 13);
// 	test("wwxxxsxx", "xx", 4294967295);
// 	test("aaabcabcd", "aabc", -1);
// 	test("aaabcabcd", "aabc", 9);
// 	test("abcdefgh", "abc", 2);
// }
