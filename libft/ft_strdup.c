/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nveneros <nveneros@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 14:15:46 by nveneros          #+#    #+#             */
/*   Updated: 2024/10/23 14:14:04 by nveneros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*output;
	int		length;
	int		i;

	length = ft_strlen((char *)s);
	output = malloc((length + 1) * sizeof(char));
	if (output == NULL)
		return (NULL);
	i = 0;
	while (s[i])
	{
		output[i] = s[i];
		i++;
	}
	output[i] = '\0';
	return (output);
}

// int	main(void)
// {
// 	char input[] = "salut";
// 	char *output;
// 	output = ft_strdup(input);
// 	printf("%s", output);
// 	free(output);
// 	return (0);
// }