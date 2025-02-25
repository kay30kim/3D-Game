/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyung-ki <kyung-ki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 11:47:11 by kyung-ki            #+#    #+#           */
/*   Updated: 2025/02/13 20:53:34 by kyung-ki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

/*
char	ft_antoine(unsigned int antoine, char c)
{
	c = c + antoine;
	return (c);
}
*/

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*map;

	i = 0;
	map = ft_calloc(ft_strlen(s) + 1, sizeof(char));
	if (map == NULL)
		return (NULL);
	while (i < ft_strlen(s))
	{
		map[i] = (*f)(i, s[i]);
		i++;
	}
	return (map);
}
/*
int	main(void)
{
	char	*s = "abcd";
	printf("%s\n", ft_strmapi(s, &ft_antoine));
	return  (0);
}
*/
