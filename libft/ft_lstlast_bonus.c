/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nveneros <nveneros@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 03:24:14 by nveneros          #+#    #+#             */
/*   Updated: 2024/10/25 15:42:51 by nveneros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*el;

	if (lst == NULL)
		return (NULL);
	el = lst;
	while (el->next)
		el = el->next;
	return (el);
}

// int	main(void)
// {
// 	t_list *head;
// 	t_list lst1;
// 	head = &lst1;
// 	t_list lst2;
// 	lst1.content = "THIRD";
// 	lst1.next = &lst2;

// 	lst2.content = "LAST";
// 	lst2.next = NULL;
// 	t_list *new_lst = ft_lstnew("SECOND");
// 	ft_lstadd_front(&head, new_lst);

// 	t_list *new_lst2 = ft_lstnew("FIRST");
// 	ft_lstadd_front(&head, new_lst2);
// 	printf("first el value %s\n", (char *)head->content);

// 	printf("list nb %d\n", ft_lstsize(head));
// 	t_list *last_el =  ft_lstlast(head);
// 	printf("last el %s\n",(char *)last_el->content);
// }