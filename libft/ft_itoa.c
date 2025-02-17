/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyung-ki <kyung-ki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 11:47:11 by kyung-ki            #+#    #+#           */
/*   Updated: 2025/02/13 20:53:34 by kyung-ki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

static int	ft_size(long int nbr)
{
	int	size;

	size = 0;
	if (nbr == 0)
	{
		size = 1;
		return (size);
	}
	if (nbr < 0)
	{
		size++;
		nbr = nbr * -1;
	}
	while (nbr > 0)
	{
		size++;
		nbr = nbr / 10;
	}
	return (size);
}

char	*ft_itoa(int n)
{
	char			*str;
	long int		nbr;
	int				size;

	nbr = n;
	size = ft_size(nbr);
	str = ft_calloc(sizeof(char), size + 1);
	if (str == NULL)
		return (NULL);
	size--;
	if (nbr == 0)
		str[0] = '0';
	if (nbr < 0)
	{
		str[0] = '-';
		nbr = nbr * -1;
	}
	while (nbr > 0)
	{
		str[size] = (nbr % 10) + 48;
		nbr = nbr / 10;
		size--;
	}
	return (str);
}
/*
int	main(void)
{
	char    *str;

	str = ft_itoa(1245);
	printf("%s\n", str);
	free(str);
	return (0);
}*/
