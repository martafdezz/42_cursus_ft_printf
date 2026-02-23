/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   write_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martafer <martafer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 19:09:34 by martafer          #+#    #+#             */
/*   Updated: 2025/12/04 14:47:29 by martafer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	write_hex(unsigned int h_nb, int type)
{
	char	*alpha;

	if (type == 'x')
		alpha = "0123456789abcdef";
	else
		alpha = "0123456789ABCDEF";
	return (base_16(h_nb, alpha));
}
