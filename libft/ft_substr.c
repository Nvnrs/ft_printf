/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nveneros <nveneros@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 05:52:29 by nveneros          #+#    #+#             */
/*   Updated: 2024/10/27 14:46:36 by nveneros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	check_max_length_sub(const char *s, size_t start, size_t len)
{
	size_t	real;
	size_t	max_val_size_t;

	real = 0;
	max_val_size_t = -1;
	if (start >= ft_strlen(s))
		return (0);
	if (len + start <= ft_strlen(s) && len < max_val_size_t)
		return (len);
	while ((s[start]))
	{
		real++;
		start++;
	}
	return (real);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t		i;
	char		*sub;
	size_t		real_length;

	i = 0;
	real_length = check_max_length_sub(s, start, len);
	sub = malloc((real_length + 1) * sizeof(char));
	if (sub == NULL )
		return (sub);
	while (i < real_length)
	{
		sub[i] = s[start];
		start++;
		i++;
	}
	sub[i] = '\0';
	return (sub);
}

// int	main(void)
// {
// 	char s[] = "salut test";
// 	int start = 1;
// 	size_t length_sub = (size_t) -1;
// 	char *new = ft_substr(s, start, length_sub);
// 	printf("%s",new);
// 	free(new);
// 	return (0);
// }