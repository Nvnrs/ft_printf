/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nveneros <nveneros@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 12:13:24 by nveneros          #+#    #+#             */
/*   Updated: 2024/10/20 12:39:30 by nveneros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (s[i])
	{
		write(fd, &s[i], 1);
		i++;
	}
}

// #include <sys/stat.h>
// #include <fcntl.h>

// int	main(void)
// {
// 	// ft_putstr_fd("salut", 1);

// 	// TEST FILE
// 	// int fd = open("test.txt", O_CREAT | O_RDWR);
// 	// ft_putstr_fd("salut", fd);
// 	return (0);
// }