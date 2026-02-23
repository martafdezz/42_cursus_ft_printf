/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   base_16.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martafer <martafer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 09:26:21 by martafer          #+#    #+#             */
/*   Updated: 2025/12/04 18:39:20 by martafer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	base_16(unsigned long nb, char *alpha)
{
	int	count;

	count = 0;
	if (nb >= 16)
		count += base_16(nb / 16, alpha);
	count += write_c(alpha[nb % 16]);
	return (count);
}
