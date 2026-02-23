/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   write_u.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martafer <martafer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 18:17:43 by martafer          #+#    #+#             */
/*   Updated: 2025/12/04 16:02:40 by martafer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	write_u(unsigned int nb)
{
	int		count;
	char	c;

	count = 0;
	if (nb > 9)
		count += write_int(nb / 10);
	c = (nb % 10) + '0';
	count += write_c(c);
	return (count);
}
