/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nveneros <nveneros@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 17:52:04 by nveneros          #+#    #+#             */
/*   Updated: 2024/10/28 11:47:04 by nveneros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;

	i = 0;
	while (s[i] || (unsigned char)c == '\0')
	{
		if (s[i] == (unsigned char)c)
			return ((char *)&s[i++]);
		i++;
	}
	return (NULL);
}

// void	test(char *s, int c)
// {
// 	printf("input : %s\n", s);
// 	printf("c to find : %c\n", c);
// 	printf("expected :%s\n", strchr(s, c));
// 	printf("result : %s\n\n", ft_strchr(s, c));
// }

// int	main(void)
// {
// 	test("bonjour", 'o');

// 	test("teste", 'a');
// 	test("teste", '\0');
// 	test("teste", 't');
// 	test("teste", 357);

// 	test("erhe", '\0');
// 	test("", '\0');
// 	return (0);
// }