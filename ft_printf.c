/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martafer <martafer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 10:47:19 by martafer          #+#    #+#             */
/*   Updated: 2025/12/05 15:36:38 by martafer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	manage_case(char const type, va_list args)
{
	int	count;

	count = 0;
	if (type == '%')
		count += write_c('%');
	else if (type == 'c')
		count += write_c((char)va_arg(args, int));
	else if (type == 's')
		count += write_s(va_arg(args, char *));
	else if (type == 'p')
		count += write_p(va_arg(args, void *));
	else if (type == 'd' || type == 'i')
		count += write_int(va_arg(args, int));
	else if (type == 'u')
		count += write_u(va_arg(args, unsigned int));
	else if (type == 'x' || type == 'X')
		count += write_hex(va_arg(args, unsigned int), type);
	return (count);
}

int	ft_printf(char const *fmt, ...)
{
	va_list	args;
	int		count;
	int		i;

	if (!fmt)
		return (-1);
	count = 0;
	va_start(args, fmt);
	i = 0;
	while (fmt[i])
	{
		if (fmt[i] != '%')
		{
			count += write_c(fmt[i]);
		}
		else
		{
			i++;
			count += manage_case(fmt[i], args);
		}
		i++;
	}
	va_end(args);
	return (count);
}
