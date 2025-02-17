/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyung-ki <kyung-ki@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 22:22:14 by kyung-ki            #+#    #+#             */
/*   Updated: 2025/02/13 20:34:56 by kyung-ki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int				len;
	unsigned char	search;

	search = (unsigned char)c;
	len = ft_strlen(s);
	while (len > 0 && s[len] != search)
		len--;
	if (s[len] == search)
		return ((char *)s + len);
	else
		return (NULL);
}
/*
int	main(void)
{
	const   char *s = "tripouille";
	//int     c = 65;

	printf("%s\n", strrchr(s, 't' + 256));
	printf("%s\n", ft_strrchr(s, 't' + 256));
	return (0);
}*/
