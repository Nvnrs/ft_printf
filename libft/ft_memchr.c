/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nveneros <nveneros@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 11:10:12 by nveneros          #+#    #+#             */
/*   Updated: 2024/10/28 11:46:44 by nveneros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*cast_s;
	unsigned char	cast_c;

	cast_s = (unsigned char *)s;
	cast_c = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (cast_s[i] == cast_c)
			return ((void *)&cast_s[i]);
		i++;
	}
	return (NULL);
}

// int	main(void)
// {
//
// 	// TEST STR
// 	// char str[] = "salut";
// 	// char c = 'a';
// 	// void *back_val;
// 	// back_val = memchr(str, c, ft_strlen(str));
// 	// if (back_val != NULL)
// 	// 	printf("%c", *(char *)back_val);
//
// 	// INT TEST
// 	// int	tab[] = {1, 2, 3, 320};
// 	// int	c = 320;
// 	// void *back_val = ft_memchr(tab, c, 4 * sizeof(int));
// 	// if (back_val != NULL)
// 	// 	printf("%d", *(int*)back_val);
// 	return (0);
// }
//