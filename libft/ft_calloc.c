/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nveneros <nveneros@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 08:59:36 by nveneros          #+#    #+#             */
/*   Updated: 2024/10/22 11:52:06 by nveneros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*tab;

	tab = malloc(nmemb * size);
	if (tab == NULL)
		return (NULL);
	ft_bzero(tab, nmemb * size);
	return (tab);
}

// void	print_tab_memory(void *tab, size_t n, char *tab_name)
// {
// 	int	i;
// 	unsigned char *c_tab;

// 	i = 0;
// 	c_tab = (unsigned char *)tab;
// 	printf("%s :\n", tab_name);
// 	while (i < n)
// 	{
// 		printf("%02x ", c_tab[i]);
// 		write(1, &c_tab[i], 1);
// 		i++;
// 	}
// 	printf("\n");
// }

// int	main(void)
// {
// 	char *me;
// 	char *expected;

// 	me = ft_calloc(4, sizeof(int));
// 	print_tab_memory(me, 4 * sizeof(int), "me");
// 	free(me);
// 	return(0);
// }