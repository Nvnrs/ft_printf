/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nveneros <nveneros@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 08:25:38 by nveneros          #+#    #+#             */
/*   Updated: 2024/10/23 14:49:07 by nveneros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static int	c_is_in_str(char c, const char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

static int	get_first_index_word(const char *str, const char *set)
{
	int	i;

	i = 0;
	while (c_is_in_str(str[i], (char *)set))
	{
		i++;
	}
	return (i);
}

static int	get_last_index_word(const char *str, const char *set)
{
	int	i;

	i = ft_strlen((char *)str) - 1;
	while (c_is_in_str(str[i], set))
	{
		i--;
	}
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	unsigned int	first_index;
	size_t			last_index;
	size_t			length;
	char			*str;

	first_index = get_first_index_word(s1, set);
	last_index = get_last_index_word(s1, set);
	length = last_index - (size_t)first_index + 1;
	str = ft_substr(s1, first_index, length);
	if (str == NULL)
		return (NULL);
	return (str);
}

// int	main(void)
// {
// 	// char *test;
// 	// test = ft_strtrim("  \t \t \n   \n\n\n\t", "");

// 	// printf("%s", test);
// 	// free(test);
// 	return (0);
// }