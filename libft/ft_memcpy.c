/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyung-ki <kyung-ki@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 20:44:28 by kyung-ki            #+#    #+#             */
/*   Updated: 2025/02/13 20:34:56 by kyung-ki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	const char		*src_cpy;
	unsigned char	*dst_cpy;

	src_cpy = src;
	dst_cpy = dst;
	i = 0;
	while (i < n)
	{
		dst_cpy[i] = src_cpy[i];
		i++;
	}
	return (dst);
}
/*
   int main(void)
   {
   char    *dst, *src;

   src = strdup("dsfsfsd");
   dst = strdup("dfzezarz");
   memcpy(dst, src, 5);
   printf("%s\n", dst);
   return (0);
   }
   */
