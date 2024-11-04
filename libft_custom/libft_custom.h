/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_custom.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nveneros <nveneros@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 17:13:52 by nveneros          #+#    #+#             */
/*   Updated: 2024/11/04 11:21:16 by nveneros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_CUSTOM_H
# define LIBFT_CUSTOM_H

# define CONFIG_UPPER 'u'
# define CONFIG_LOWER 'l'

# include "../libft/libft.h"

unsigned int	cft_length_nbr(long nb);
void			cft_putnbr_ui_fd(unsigned int nb, int fd);
char			*cft_dec_to_hex(unsigned long nb, char config);

#endif