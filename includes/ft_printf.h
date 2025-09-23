/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nado-nas <nado-nas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/28 17:47:15 by nado-nas          #+#    #+#             */
/*   Updated: 2025/09/23 11:18:40 by nado-nas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

# define DEC "0123456789"
# define HEX "0123456789abcdef"
# define UHEX "0123456789ABCDEF"

typedef unsigned long long ull;
typedef unsigned int ui;
typedef s_

int		ft_printf(const char *fmt, ...);

int		ft_putfmt(const char *src, va_list *ap);
/*
int	ft_puthex(__int128 nbr){
	return (ft_putbasen(nbr, HEX, 16));
}
int	ft_putdec(__int128 nbr)
{
	return (ft_putbasen(nbr, HEX, 16));
}
*/

/*───────────────────────────────────────────
				Aux functions
─────────────────────────────────────────────*/
int		ft_putbasen(__int128 nbr, const char *base, size_t blen);
int		ft_putbpadd(__int128 nbr, const char *base, int p, char sym);
int		ft_vfmt(const char *fmt);

/*───────────────────────────────────────────
			Misc functions
─────────────────────────────────────────────*/
size_t	ft_strlen(const char *s);
int		ft_putcharn(char c);
int		ft_putstrn(const char*str);

#endif