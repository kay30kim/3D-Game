/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyung-ki <kyung-ki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 11:47:11 by kyung-ki            #+#    #+#           */
/*   Updated: 2025/02/13 20:53:34 by kyung-ki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*p;

	c = (unsigned char)c;
	p = s;
	while (n > 0)
	{
		if (*p == c && n > 0)
			return ((void *)p);
		n--;
		p++;
	}
	return (0);
}
/*
int	main(void)
{
	const char *s = "012345";
	int     c = '2';
	const char	*s2 = "012345";

	s = ft_memchr((const void *)s, c, 3);
	s2 = memchr((const void *)s2, c, 3);

	printf("%s\n", s);
	printf("%s\n", s2);
	return (0);
}*/
