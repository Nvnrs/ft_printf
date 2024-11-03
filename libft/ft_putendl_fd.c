/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nveneros <nveneros@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 12:39:43 by nveneros          #+#    #+#             */
/*   Updated: 2024/10/20 12:45:32 by nveneros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}

// #include <sys/stat.h>
// #include <fcntl.h>

// int	main(void)
// {
// 	// ft_putendl_fd("salut", 1);
//
// 	// TEST FILE
// 	// int fd = open("test.txt", O_CREAT | O_RDWR);
// 	// ft_putendl_fd("salut", fd);
// 	return (0);
// }