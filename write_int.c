/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   write_int.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martafer <martafer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 18:16:55 by martafer          #+#    #+#             */
/*   Updated: 2025/12/04 16:00:32 by martafer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	write_int(int nb)
{
	int		count;
	char	c;

	count = 0;
	if (nb == -2147483648)
		return (write_s("-2147483648"));
	if (nb < 0)
	{
		count += write_c('-');
		nb = -nb;
	}
	if (nb > 9)
		count += write_int(nb / 10);
	c = (nb % 10) + '0';
	count += write_c(c);
	return (count);
}
