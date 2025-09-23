/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nado-nas <nado-nas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/12 12:19:08 by nado-nas          #+#    #+#             */
/*   Updated: 2025/09/23 11:13:51 by nado-nas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_printf.h>

int	ft_putfmt(const char *src, va_list *ap)
{
	if (src[0] == 'c')
		return (ft_putcharn(va_arg(*ap, int)));
	else if (src[0] == 's')
		return (ft_putstrn(va_arg(*ap, char *)));
	else if (src[0] == 'p')
	{
		ft_putstrn("0x");
		return (ft_putbasen(va_arg(*ap, ull), HEX, 16) + 2);
	}
	else if (src[0] == 'd' || src[0] == 'i')
		return (ft_putbpadd(va_arg(*ap, int), DEC, 5, '0'));
	else if (src[0] == 'u' || src[0] == 'i')
		return (ft_putbasen(va_arg(*ap, ui), DEC, 10));
	else if (src[0] == 'x')
		return (ft_putbasen(va_arg(*ap, ui), HEX, 16));
	else if (src[0] == 'X')
		return (ft_putbasen(va_arg(*ap, ui), UHEX, 16));
	else if (src[0] == '%')
		return (ft_putcharn('%'));
	return (0);
}

int	ft_printf(const char *fmt, ...)
{
	va_list	ap;
	int		i;
	int		c;

	if (!ft_vfmt(fmt))
		return (0);
	i = 0;
	c = 0;
	va_start(ap, fmt);
	while (fmt[i])
	{
		if (fmt[i] != '%')
			c += ft_putcharn(fmt[i]);
		else if (fmt[++i])
			c += ft_putfmt(&(fmt[i]), &ap);
		i++;
	}
	va_end(ap);
	return (c);
}

#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	int		r;
	int		e;
	//void	*s;
	int		s;

	/*
	s = (void*)0x003ff4d478a712a0;
	r = ft_printf("e: %p\n", s);
	e = printf("r: %p\n", s);
	printf("r: %d, e: %d\n", r, e);
	*/
	//r = ft_printf("r: %x\n", -120);
	//e = printf("e: %x\n", -120);
	//printf("%d, %d", r, e);
	printf("|%010#s|\n", "10");
	printf("|%010d|\n", 10); 
}
