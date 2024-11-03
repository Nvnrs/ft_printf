/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nveneros <nveneros@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 15:22:12 by nveneros          #+#    #+#             */
/*   Updated: 2024/10/27 14:11:47 by nveneros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	dest_is_greather_than_src(void *dest,
const void *src, size_t n)
{
	int				i;
	unsigned char	*c_dest;
	unsigned char	*c_src;

	i = 0;
	c_dest = (unsigned char *)dest;
	c_src = (unsigned char *)src;
	if (dest > src)
	{
		i = n - 1;
		while (i >= 0)
		{
			c_dest[i] = c_src[i];
			i--;
		}
	}
}

static void	dest_is_lower_or_egal_than_src(void *dest,
const void *src, size_t n)
{
	size_t			i;
	unsigned char	*c_dest;
	unsigned char	*c_src;

	i = 0;
	c_dest = (unsigned char *)dest;
	c_src = (unsigned char *)src;
	if (dest <= src)
	{
		while (i < n)
		{
			c_dest[i] = c_src[i];
			i++;
		}
	}
}

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	if (dest == NULL && src == NULL)
		return (NULL);
	dest_is_lower_or_egal_than_src(dest, src, n);
	dest_is_greather_than_src(dest, src, n);
	return (dest);
}

// void	print_tab(char *tab, int length)
// {
// 	int	i;

// 	i = 0;
// 	while (i < length)
// 	{
// 		printf("%c", tab[i]);
// 		i++;
// 	}

// }

// int	main(void)
// {
//     char dest[5] = "abcde";
//     memcpy(&dest[1], dest, 4);
//     print_tab(dest, 5);
// 	return (0);
// }
