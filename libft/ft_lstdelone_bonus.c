/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nveneros <nveneros@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 03:48:38 by nveneros          #+#    #+#             */
/*   Updated: 2024/10/25 15:44:40 by nveneros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (lst == NULL)
		return ;
	del(lst->content);
	free(lst);
}
// void	free_str(void *content)
// {
// 	char *str = (char*)content;
// 	free(str);
// }

// char	*str_heap(char *str)
// {
// 	int	i;
// 	char *output;

// 	i = 0;
// 	output = malloc((ft_strlen(str) + 1)* sizeof(char));
// 	while (str[i])
// 	{
// 		output[i] = str[i];
// 		i++;
// 	}
// 	output[i] ='\0';
// 	return (output);
// }

// int	main(void)
// {
// 	t_list	*head;
// 	t_list	*el;
// 	t_list	*el1;
// 	char *content;
// 	char *content1;

// 	content = str_heap("salut je test");
// 	content1 = str_heap("test 2");
// 	el = ft_lstnew(content);
// 	el1 = ft_lstnew(content1);
// 	el->next = el1;
// 	head = el;
// 	printf("avant %d\n", ft_lstsize(head));
// 	ft_lstdelone(el, free_str);
// 	ft_lstdelone(el1, free_str);
// 	el = NULL;
// 	el1 = NULL;
// 	head = NULL;
// 	printf("apres %d", ft_lstsize(head));
// 	return (0);
// }