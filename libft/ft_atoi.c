/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nveneros <nveneros@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 11:44:05 by nveneros          #+#    #+#             */
/*   Updated: 2024/11/04 10:58:09 by nveneros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	skip_spaces(const char *str, int *i)
{
	while (str[*i] == ' ' || (str[*i] >= '\t' && str[*i] <= '\r'))
		*i += 1;
}

static int	get_sign(const char *str, int *i)
{
	int	sign;

	sign = 1;
	if (str[*i] == '-')
	{
		*i += 1;
		sign = -1;
	}
	else if (str[*i] == '+')
		*i += 1;
	return (sign);
}

static int	get_length_nb(const char *str)
{
	int	i;

	i = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		i++;
	}
	return (i);
}

static int	get_digit_position(int figure, int position)
{
	int	nb;

	nb = figure;
	while (position > 1)
	{
		nb *= 10;
		position--;
	}
	return (nb);
}

int	ft_atoi(const char *nptr)
{
	int	i;
	int	nb;
	int	sign;
	int	length_nb;

	i = 0;
	nb = 0;
	skip_spaces(nptr, &i);
	sign = get_sign(nptr, &i);
	length_nb = get_length_nb(&nptr[i]);
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		nb += get_digit_position(nptr[i] - '0', length_nb);
		length_nb--;
		i++;
	}
	return (nb * sign);
}

// void	test(char *str)
// {
// 	printf("______TEST_____\n");
// 	printf("input : %s\n", str);
// 	printf("expected : %d\n", atoi(str));
// 	printf("input : %d\n\n", ft_atoi(str));
// }

// int	main(void)
// {
// 	test("salut je test10");
// 	test("45");
// 	test("    		\n\n 1");
// 	test("    		\n\n 15ererere2");
// 	test("6   7895");
// 	test("aaaaa -1");
// 	test("aaaaa +12");
// 	test(" ");
// 	test("  ----155");
// 	test("  -155");
// 	test("  -+12");
// 	test("+8");
// 	test("-7");
// 	return (0);
// }