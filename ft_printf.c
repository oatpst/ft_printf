/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwanakit <pwanakit@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 10:47:56 by pwanakit          #+#    #+#             */
/*   Updated: 2024/01/11 11:05:11 by pwanakit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char c)
{
	write (1, &c, 1);
	return (1);
}

int	ft_putstr(char *str)
{
	int	i;

	i = 0;
	if (!str)
	{
		write(1, "(null)", 6);
	}
	while (str[i])
		i += ft_putchar(str[i]);
	return (i);
}

int	check_type(va_list *args, char c)
{
	int	len;

	len = 0;
	if (c == 'c')
		len += ft_putchar(va_arg(*args, int));
	else if (c == 's')
		len += ft_putstr(va_arg(*args, char *));
	else if (c == 'p')
		len += ft_putnbr_p(va_arg(*args, unsigned long));
	else if (c == 'd' || c == 'i')
		len += ft_putnbr(va_arg(*args, int));
	else if (c == 'u')
		len += ft_putnbr_u(va_arg(*args, unsigned int));
	else if (c == 'x')
		len += ft_putnbr_x(va_arg(*args, unsigned int));
	else if (c == 'X')
		len += ft_putnbr_xx(va_arg(*args, unsigned int));
	else if (c == '%')
		len += ft_putchar('%');
	return (len);
}

int	ft_printf(const char *s, ...)
{
	va_list	args;
	int		len;
	int		i;

	len = 0;
	i = 0;
	va_start(args, s);
	while (s[i])
	{
		if (s[i] == '%')
		{
			i++;
			len += check_type(&args, s[i]);
		}
		else
			len += ft_putchar(s[i]);
		i++;
	}
	return (len);
}
