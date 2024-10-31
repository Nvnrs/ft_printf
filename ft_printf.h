/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nveneros <nveneros@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 10:37:09 by nveneros          #+#    #+#             */
/*   Updated: 2024/10/31 16:05:54 by nveneros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "./libft/libft.h"
# include "./libft_custom/libft_custom.h"
# include <stdarg.h>

# define FORMAT_C "c"
# define FORMAT_S "s"
# define FORMAT_POINTER "p"
# define FORMATS_INT "di"
# define FORMATS_UINT "uxX"
# define FORMAT_PERCENT "%"
# define LST_FORMATS "cspdiuxX%"

int	ft_printf(const char *format, ...);
int	check_format(const char *str, char *group_formats);
int	format_is_not_valid(char percent, char format);

// TREATEMENT FORMAT
int	treatment_int(va_list *ap);
int	treatment_unsigned_int(va_list *ap, char format);
int	treatment_pointer(va_list *ap);
int	treatment_char(va_list *ap);
int	treatment_str(va_list *ap);
int	treatment_percent(void);
#endif
