/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nveneros <nveneros@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 21:22:44 by nveneros          #+#    #+#             */
/*   Updated: 2024/10/27 12:02:09 by nveneros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	set_new_list_if_null(t_list **new_list, t_list *new_el)
{
	if (*new_list == NULL)
		*new_list = new_el;
}

static void	link_prev_el_with_new(t_list *previous_el, t_list *new_el)
{
	if (previous_el != NULL)
		previous_el->next = new_el;
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*el;
	t_list	*new_el;
	t_list	*previous_el;
	void	*new_content;

	el = lst;
	new_list = NULL;
	previous_el = NULL;
	while (el != NULL)
	{
		new_content = f(el->content);
		new_el = ft_lstnew(new_content);
		if (new_el == NULL)
		{
			del(new_content);
			ft_lstclear(&new_list, del);
			break ;
		}
		set_new_list_if_null(&new_list, new_el);
		link_prev_el_with_new(previous_el, new_el);
		el = el->next;
		previous_el = new_el;
	}
	return (new_list);
}

// TEST
// void	ft_print_lst_content(t_list *lst)
// {
// 	t_list *el;

// 	el = lst;
// 	while (el != NULL)
// 	{
// 		printf("%d\n", *(int *)el->content);
// 		el = el->next;
// 	}	
// }

// STR TEST
/* void	*str_to_a(void *content)
{
	char *c_content;
	char *str;
	int	i;

	c_content = (char *)content;
	str = ft_strdup((char*)content);
	i = 0;
	while (c_content[i])
	{
		str[i] = 'a';
		i++;
	}
	str[i] = '\0';
	return str;
}

void	free_str(void *content)
{
	free((char *)content);
} */

// INT TEST FUNC
/* int	*create_int(int nb)
{
	int	*output;

	output = malloc(sizeof(int));
	*output = nb;
	return output;
}


void	print_tab(int *tab, int length)
{
	int i;

	i = 0;
	while (i < length)
	{
		printf("%d ", tab[i]);
		i++;
	}
}

void	*square_int(void *content)
{
	int	*square;
	int	nb;

	nb = *(int *)content;
	square = create_int(nb * nb);
	return square;
}

void	free_int(void *content)
{
	free((int *)content);
} */

// int	main(void)
// {
// 	t_list *new;
// 	t_list	*lst;
// 	t_list *lst1;
// 	t_list *lst2;
// 	t_list *lst3;

// 	// STR TEST
// /* 	lst1 = ft_lstnew(ft_strdup("salut"));
// 	lst2 = ft_lstnew(ft_strdup("42"));
// 	lst3 = ft_lstnew(ft_strdup("test"));

// 	lst1->next = lst2;
// 	lst2->next = lst3;
// 	lst = lst1;
// 	printf("ORIGINAL :\n");
// 	ft_print_lst_content(lst);
// 	new = ft_lstmap(lst, str_to_a, free_str);
// 	printf("\nAFTER :\n");
// 	ft_print_lst_content(new);
// 	ft_lstclear(&lst, free_str);
// 	ft_lstclear(&new, free_str); */

// 	//  INT TEST
// /* 	lst1 = ft_lstnew(create_int(5));
// 	lst2 = ft_lstnew(create_int(10));
// 	lst3 = ft_lstnew(create_int(2));

// 	lst1->next = lst2;
// 	lst2->next = lst3;
// 	lst = lst1;
// 	printf("ORIGINAL :\n");
// 	ft_print_lst_content(lst);
// 	new = ft_lstmap(lst, square_int, free_int);
// 	printf("\nAFTER :\n");
// 	ft_print_lst_content(new);
// 	ft_lstclear(&lst, free_int);
// 	ft_lstclear(&new, free_int); */

// 	return (0);
// }