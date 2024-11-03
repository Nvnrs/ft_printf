/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nveneros <nveneros@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 20:35:07 by nveneros          #+#    #+#             */
/*   Updated: 2024/10/25 21:21:39 by nveneros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*el;

	el = lst;
	while (el != NULL)
	{
		f(el->content);
		el = el->next;
	}
}
// void	ft_print_lst_content(t_list *lst)
// {
// 	t_list *el;

// 	el = lst;
// 	while (el != NULL)
// 	{
// 		printf("%s\n", (char *)el->content);
// 		el = el->next;
// 	}	
// }

// void	str_to_a(void *content)
// {
// 	char *str;
// 	int	i;

// 	str = (char *)content;
// 	i = 0;
// 	while (str[i])
// 	{
// 		str[i] = 'a';
// 		i++;
// 	}

// }
// int	main(void)
// {
// 	t_list	*head;
// 	t_list *lst1;
// 	t_list *lst2;
// 	t_list *lst3;

// 	lst1 = ft_lstnew(ft_strdup("salut"));
// 	lst2 = ft_lstnew(ft_strdup("42"));
// 	lst3 = ft_lstnew(ft_strdup("test"));

// 	lst1->next = lst2;
// 	lst2->next = lst3;
// 	head = lst1;
// 	printf("BEFORE :\n");
// 	ft_print_lst_content(head);
// 	ft_lstiter(head, str_to_a);
// 	printf("\nAFTER :\n");
// 	ft_print_lst_content(head);
// 	return (0);
// }