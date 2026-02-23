/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   write_p.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martafer <martafer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 19:08:45 by martafer          #+#    #+#             */
/*   Updated: 2025/12/04 18:38:31 by martafer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	write_p(void *p)
{
	int				count;
	unsigned long	addr;

	addr = (unsigned long) p;
	if (!p)
		return (write_s("(nil)"));
	count = 0;
	count += write_s("0x");
	count += base_16(addr, "0123456789abcdef");
	return (count);
}
