/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstrn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nado-nas <nado-nas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 14:55:55 by nado-nas          #+#    #+#             */
/*   Updated: 2025/10/06 11:50:22 by nado-nas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

/**
 * @return The amount of characters printed
 * @note Prints "(null) if the pointer is NULL"
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
