/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyung-ki <kyung-ki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 11:47:11 by kyung-ki            #+#    #+#           */
/*   Updated: 2025/02/13 20:53:34 by kyung-ki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

static int	ft_strssize(char const *s1, char const *s2)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s1[i])
		i++;
	while (s2[j])
		j++;
	return (i + j);
}

char	*ft_strjoin(char *s1, char *s2)
{
	int		size;
	int		i;
	char	*tab;

	i = 0;
	size = ft_strssize(s1, s2);
	tab = malloc(sizeof(char) * size + 1);
	tab[size] = '\0';
	if (tab == NULL)
		return (NULL);
	while (*s1)
	{
		tab[i] = *s1;
		i++;
		s1++;
	}
	while (*s2)
	{
		tab[i] = *s2;
		i++;
		s2++;
	}
	return (tab);
}
