/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwanakit <pwanakit@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 10:34:41 by pwanakit          #+#    #+#             */
/*   Updated: 2024/01/11 11:05:03 by pwanakit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include	<unistd.h>
# include	<stdarg.h>

int	ft_printf(const char *s, ...);
int	ft_putchar(char c);
int	ft_putstr(char *str);
int	check_type(va_list *args, char c);
int	ft_putnbr(long nb);
int	ft_putnbr_u(unsigned int nb);
int	ft_putnbr_x(unsigned long nb);
int	ft_putnbr_xx(unsigned int nb);
int	ft_putnbr_p(unsigned long nb);

#endif