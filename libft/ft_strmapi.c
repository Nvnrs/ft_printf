/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nveneros <nveneros@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 11:03:30 by nveneros          #+#    #+#             */
/*   Updated: 2024/10/20 11:44:41 by nveneros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	int		length;
	char	*output;

	i = 0;
	length = ft_strlen((char *)s);
	output = malloc((length + 1) * sizeof(char));
	if (output == NULL)
		return (NULL);
	while (s[i])
	{
		output[i] = f(i, s[i]);
		i++;
	}
	output[i] = '\0';
	return (output);
}

// char	c_to_zero(unsigned int i, char c)
// {
// 	c = '0';
// 	return (c);
// }

// int	main(void)
// {
// 	char	input[] = "salut";
// 	char	*output;
// 	output = ft_strmapi(input, c_to_zero);
// 	printf("output :%s", output);
// 	free(output);
// 	return (0);
// }