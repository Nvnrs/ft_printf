/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nveneros <nveneros@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 02:17:09 by nveneros          #+#    #+#             */
/*   Updated: 2024/10/25 15:41:58 by nveneros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}

// int	main(void)
// {
// 	t_list *head;
// 	t_list lst1;
// 	head = &lst1;
// 	t_list lst2;
// 	lst1.content = "test1";
// 	lst1.next = &lst2;

// 	lst2.content = "test2";
// 	lst2.next = NULL;
// 	t_list *new_lst = ft_lstnew("NEW");
// 	ft_lstadd_front(&head, new_lst);

// 	t_list *new_lst2 = ft_lstnew("FIRST");
// 	ft_lstadd_front(&head, new_lst2);
// 	printf("first el value %s\n", (char *)head->content);

// 	printf("list nb %d\n", ft_lstsize(head));
// }