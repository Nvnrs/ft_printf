/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nveneros <nveneros@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 15:56:26 by nveneros          #+#    #+#             */
/*   Updated: 2024/10/25 19:10:55 by nveneros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*el;
	t_list	*tmp_next;

	el = *lst;
	while (el != NULL)
	{
		tmp_next = el->next;
		del(el->content);
		free(el);
		el = tmp_next;
	}
	*lst = NULL;
}
// void	free_str(void *content)
// {
// 	free((char *)content);
// }

// int	main(void)
// {
// 	t_list *head;
// 	t_list *lst1;
// 	t_list *lst2;

// 	lst1 = ft_lstnew(ft_strdup("salut"));
// 	lst2 = ft_lstnew(ft_strdup("test"));
// 	lst1->next = lst2;
// 	head = lst1;
// 	ft_lstclear(&head, free_str);
// 	if (head == NULL)
// 		printf("lst free");
// 	else
// 		printf("lst are no free");
// }