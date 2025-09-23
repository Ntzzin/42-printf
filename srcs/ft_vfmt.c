/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vfmt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nado-nas <nado-nas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 16:18:19 by nado-nas          #+#    #+#             */
/*   Updated: 2025/09/17 10:46:50 by nado-nas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_printf.h>

static int	ft_isvalid(char c)
{
	if (c == 'c' || c == 's' || c == 'p' || c == 'd' || c == 'i' || c == 'u'
		|| c == 'x' || c == 'X' || c == '%' || c == '-' || c == '0' || c == '.'
		|| c == '#' || c == ' ' || c == '+')
		return (1);
	return (0);
}

int	ft_vfmt(const char *fmt)
{
	int	i;

	i = 0;
	while (fmt[i])
	{
		while (fmt[i] && fmt[i] != '%')
			i++;
		if (fmt[i] == '%')
			if (!ft_isvalid(fmt[++i]))
				return (0);
		i++;
	}
	return (1);
}
