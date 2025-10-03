/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstrn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nado-nas <nado-nas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 14:55:55 by nado-nas          #+#    #+#             */
/*   Updated: 2025/10/03 16:51:38 by nado-nas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_printf.h>

/**
 * @return The amount of characters printed
 */
int	ft_putstrn(const char *str)
{
	int	i;

	if (!str)
		return (ft_putstrn("(null)"));
	i = 0;
	while (str[i])
		ft_putcharn(str[i++]);
	return (i);
}
