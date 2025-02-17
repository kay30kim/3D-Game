/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyung-ki <kyung-ki@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 11:52:37 by kyung-ki            #+#    #+#             */
/*   Updated: 2025/02/13 20:34:56 by kyung-ki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}
/*
   int main(void)
   {
   int c = '\n';
   printf("%d\n", ft_isprint(c));
   printf("%d\n", isprint(c));
   return (0);
   }
   */
