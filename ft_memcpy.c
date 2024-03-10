/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbelarbi <zbelarbi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 15:56:02 by zbelarbi          #+#    #+#             */
/*   Updated: 2023/11/14 20:32:17 by zbelarbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*s1;
	unsigned char	*s2;

	s1 = (unsigned char *)src;
	s2 = (unsigned char *)dst;
	i = 0;
	if ((dst == NULL && src == NULL) || (dst == src))
		return (dst);
	while (i < n)
	{
		s2[i] = s1[i];
		i++;
	}
	return (dst);
}
