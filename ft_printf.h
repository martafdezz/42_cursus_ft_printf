/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martafer <martafer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 13:22:21 by martafer          #+#    #+#             */
/*   Updated: 2025/12/05 15:04:35 by martafer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

// Includes
# include <stdarg.h>
# include <unistd.h>

// Main function
int	ft_printf(char const *fmt, ...);

// Support functions
int	base_16(unsigned long nb, char *alpha);
int	write_c(char c);
int	write_hex(unsigned int h_nb, int type);
int	write_int(int nb);
int	write_p(void *p);
int	write_s(char *s);
int	write_u(unsigned int nb);

#endif