/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nveneros <nveneros@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 03:07:57 by nveneros          #+#    #+#             */
/*   Updated: 2024/10/27 14:43:21 by nveneros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_nb_words(char const *s, char c)
{
	int	i;
	int	nb_words;

	i = 0;
	nb_words = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			if (s[i + 1] == c || s[i + 1] == '\0')
				nb_words++;
		}
		i++;
	}
	return (nb_words);
}

static char	*create_word(char const *str, int start, int end)
{
	int		length;
	char	*word;
	int		i;

	i = 0;
	length = (end - start) + 1;
	word = malloc((length +1) * sizeof(char));
	if (word == NULL)
		return (NULL);
	while (start <= end)
	{
		word[i] = str[start];
		start++;
		i++;
	}
	word[i] = '\0';
	return (word);
}

static void	free_tab(char **tab)
{
	int	i;

	i = 0;
	while (tab[i])
	{
		free(tab[i]);
		i++;
	}
	free(tab);
}

static int	fill_tab(char const *s, char c, char **tab)
{
	int	i;
	int	length_word;
	int	i_word;

	i = 0;
	length_word = 0;
	i_word = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			length_word++;
			if (s[i + 1] == c || s[i + 1] == '\0')
			{
				tab[i_word] = create_word(s, (i - (length_word - 1)), i);
				if (tab[i_word] == NULL)
					return (0);
				i_word++;
				length_word = 0;
			}
		}
		i++;
	}
	tab[i_word] = 0;
	return (1);
}

char	**ft_split(char const *s, char c)
{
	int		nb_words;
	char	**tab;

	nb_words = get_nb_words(s, c);
	tab = malloc((nb_words + 1) * sizeof(char *));
	if (tab == NULL)
		return (NULL);
	if (!fill_tab(s, c, tab))
	{
		free_tab(tab);
		return (NULL);
	}
	return (tab);
}

// void	print_tab(char **tab)
// {
// 	int i;

// 	i = 0;
// 	printf("\n__TAB__\n");
// 	while (tab[i])
// 	{
// 		printf("%s\n", tab[i]);
// 		i++;
// 	}
// }

// int main(void)
// {
// 	char	**tab;
// 	tab = ft_split("salut@je@test", '@');
// 	print_tab(tab);
// 	free_tab(tab);
// 	return (0);
// }