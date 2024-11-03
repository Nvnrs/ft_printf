/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nveneros <nveneros@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 03:01:33 by nveneros          #+#    #+#             */
/*   Updated: 2024/10/25 14:52:23 by nveneros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*el;
	int		i;

	el = lst;
	i = 0;
	while (el != NULL)
	{
		el = el->next;
		i++;
	}
	return (i);
}

// int	main(void)
// {
// 	t_list lst1;
// 	t_list lst2;
// 	lst1.content = "salut";
// 	lst1.next = &lst2;

// 	lst2.content = "2";
// 	lst2.next = NULL;	

// 	printf("list nb %d", ft_lstsize(&lst1));
// 	return (0);
// }