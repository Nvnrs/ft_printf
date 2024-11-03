/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nveneros <nveneros@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 03:37:28 by nveneros          #+#    #+#             */
/*   Updated: 2024/10/25 15:54:22 by nveneros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last_el;

	if (*lst != NULL)
	{
		last_el = ft_lstlast(*lst);
		last_el->next = new;
	}
	else
		*lst = new;
}

// int	main(void)
// {
// 	t_list *head;
// 	t_list lst1;
// 	head = &lst1;
// 	t_list lst2;
// 	lst1.content = "3";
// 	lst1.next = &lst2;

// 	lst2.content = "4";
// 	lst2.next = NULL;
// 	t_list *new_lst = ft_lstnew("2");
// 	ft_lstadd_front(&head, new_lst);

// 	t_list *new_lst2 = ft_lstnew("1");
// 	ft_lstadd_front(&head, new_lst2);

// 	t_list last;
// 	last.next = NULL;
// 	last.content = "LAST";
// 	ft_lstadd_back(&head, &last);
// 	t_list *last_el =  ft_lstlast(head);
// 	printf("last el %s\n",(char *)last_el->content);
// }