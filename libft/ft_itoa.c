/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nveneros <nveneros@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 21:49:14 by nicolas           #+#    #+#             */
/*   Updated: 2024/10/23 10:46:11 by nveneros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_length_nb(long nb)
{
	long	length;

	length = 0;
	if (nb < 0)
	{
		nb *= -1;
		length++;
	}
	while (nb >= 10)
	{
		nb = nb / 10;
		length++;
	}
	length++;
	return (length);
}

static char	*get_nb(long nb, long length_nb)
{
	long	i;
	char	*str;

	i = length_nb - 1;
	str = malloc((length_nb + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	if (nb < 0)
	{
		nb *= -1;
		str[0] = '-';
	}
	while (nb >= 10)
	{
		str[i] = nb % 10 + '0';
		nb = nb / 10;
		i--;
	}
	str[i] = nb + '0';
	str[length_nb] = '\0';
	return (str);
}

char	*ft_itoa(int n)
{
	long	nb;
	long	length_nb;
	char	*nb_str;

	nb = n;
	length_nb = get_length_nb(nb);
	nb_str = get_nb(nb, length_nb);
	return (nb_str);
}

// int main(void)
// {
//     char *str;
//     char *str1;
//     str = ft_itoa(-2147483648);
//     printf("str : %s\n", str);
//     free(str);
//     return (0);
// }

// get chaine return number

// longeur du nombre