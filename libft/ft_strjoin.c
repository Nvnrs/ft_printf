/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nveneros <nveneros@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 06:30:05 by nveneros          #+#    #+#             */
/*   Updated: 2024/10/27 15:26:31 by nveneros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		length;
	char	*str;

	length = ft_strlen((char *)s1) + ft_strlen((char *)s2);
	str = malloc((length + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	str[0] = '\0';
	ft_strlcat((char *)str, (char *)s1, length + 1);
	ft_strlcat((char *)str, (char *)s2, length + 1);
	return (str);
}

// int	main(void)
// {
// 	char s1[] = "42";
// 	char s2[] = "born to ...";
// 	char *result = ft_strjoin(s1, s2);
// 	printf("%s", result);
// 	free(result);
// 	return (0);
// }