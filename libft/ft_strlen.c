/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyung-ki <kyung-ki@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 20:58:43 by kyung-ki            #+#    #+#             */
/*   Updated: 2025/02/13 21:32:36 by kyung-ki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
/*
   int main(int argc, char **argv)
   {
   int size;
   if (argc == 2)
   printf("%d\n", size = ft_strlen(argv[1]));
   return (0);
   }
   */
