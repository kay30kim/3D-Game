/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyung-ki <kyung-ki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 11:47:11 by kyung-ki            #+#    #+#           */
/*   Updated: 2025/02/13 20:53:34 by kyung-ki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

static int	ft_is_set(char const *set, char c)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

static int	ft_start_index(char const *s1, char const *set)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s1[i] && ft_is_set(set, s1[i]))
	{
		i++;
		count++;
	}
	return (count);
}

static int	ft_end_index(char const *s1, char const *set)
{
	int	i;
	int	count;

	i = ft_strlen(s1) - 1;
	count = 0;
	while (s1[i] && ft_is_set(set, s1[i]))
	{
		i--;
		count++;
	}
	return (count);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*tab;
	size_t	size_start;
	size_t	size_end;

	size_start = 0;
	size_end = 0;
	if (ft_start_index(s1, set))
		size_start = ft_start_index(s1, set);
	if (ft_end_index(s1, set))
		size_end = ft_end_index(s1, set);
	tab = ft_substr(s1, size_start, ft_strlen(s1) - (size_start + size_end));
	return (tab);
}
/*
int	main(void)
{
	printf("%s\n", ft_strtrim("aaaaabacaaaaa", "a"));
	return (0);
}*/
