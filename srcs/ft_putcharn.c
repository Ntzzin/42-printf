/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putcharn.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nado-nas <nado-nas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 14:55:55 by nado-nas          #+#    #+#             */
/*   Updated: 2025/09/17 10:46:35 by nado-nas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @return The amount of characters printed
 */
#include <ft_printf.h>

int	ft_putcharn(char c)
{
	write(1, &c, 1);
	return (1);
}
