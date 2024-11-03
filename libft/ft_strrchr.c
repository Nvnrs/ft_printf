/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nveneros <nveneros@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 18:06:26 by nveneros          #+#    #+#             */
/*   Updated: 2024/10/24 15:49:54 by nveneros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*find;

	i = 0;
	find = NULL;
	while (s[i])
	{
		if (s[i] == (unsigned char)c)
			find = (char *)&s[i];
		i++;
	}
	if ((unsigned char)c == '\0')
		find = (char *)&s[i];
	return (find);
}

// void	test(char *s, char c)
// {
// 	printf("input : %s\n", s);
// 	printf("c to find : %c\n", c);
// 	printf("expected :%s\n", strrchr(s, c));
// 	printf("result : %s\n\n", ft_strrchr(s, c));
// }

// int	main(void)
// {
// 	test("saluaat", 'a');
// 	test("test", '\0');
// 	test("teste", 'e');
// 	test("test", 'a');
// 	test("", 'b');
// 	test("", '\0');
// 	return (0);
// }