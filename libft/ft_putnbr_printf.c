/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_printf.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyung-ki <kyung-ki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 11:47:11 by kyung-ki            #+#    #+#           */
/*   Updated: 2025/02/13 20:53:34 by kyung-ki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/ft_printf.h"

int	ft_putnbr_printf(int n, int fd)
{
	long int	nb;
	char		c;
	int			len;
	int			sign;

	len = 0;
	sign = 0;
	nb = n;
	if (nb < 0)
	{
		write(fd, "-", 1);
		nb = -nb;
		sign = 1;
	}
	if (nb > 9)
		len += ft_putnbr_printf(nb / 10, fd);
	nb = nb % 10;
	c = nb + 48;
	len++;
	write(fd, &c, 1);
	return (len + sign);
}
