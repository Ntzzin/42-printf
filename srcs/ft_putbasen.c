/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putbasen.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nado-nas <nado-nas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/12 12:20:32 by nado-nas          #+#    #+#             */
/*   Updated: 2025/09/18 14:19:02 by nado-nas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_printf.h>

/**
 * @brief Calculates the amount of digits needed in order
 * to represent a given number in a base of size ’blen’
 * @param nbr The given number.
 * @param blen The lenght of ’base’ as an default C string
 * @return The number of digits of the converted number
 * @note __int128 is used so the function can handle both
 * unsigned long long values and negative numbers safely.
 */
static int	ft_nsize(__int128 nbr, int blen)
{
	int	sig;

	sig = 0;
	if (nbr < 0)
	{
		nbr *= -1;
		sig = 1;
	}
	if (nbr < blen)
		return (1 + sig);
	return (1 + sig + ft_nsize(nbr / blen, blen));
}

/**
 * @brief Prints a number in an arbitrary ’base’
 * @param nbr The number to be printed.
 * @param base The base in which the number will be represented
 * @param blen The lenght of ’base’ as an default C string
 * @return The number of characters printed
 * @note __int128 is used so the function can handle both
 * unsigned long long values and negative numbers safely.
 */
int	ft_putbasen(__int128 nbr, const char *base, size_t blen)
{
	int	size;

	size = 1;
	if (nbr < 0)
	{
		write(1, "-", 1);
		nbr *= -1;
		size++;
	}
	if (nbr >= blen)
		size += ft_putbasen(nbr / blen, base, blen);
	write(1, &(base[nbr % blen]), 1);
	return (size);
}

int	ft_putbpadd(__int128 nbr, const char *base, int p, char sym)
{
	int	n;

	n = 0;
	if (p >= 0)
	{
		n += ft_putbasen(nbr, base, ft_strlen(base));
		while (n < p)
			n += ft_putcharn(sym);
	}
	else if (p < 0)
	{
		n += ft_nsize(nbr, ft_strlen(base));
		while (n < (-p))
			n += ft_putcharn(sym);
		ft_putbasen(nbr, base, ft_strlen(base));
	}
	return (n);
}
