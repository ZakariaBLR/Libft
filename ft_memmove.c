/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbelarbi <zbelarbi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 11:21:33 by zbelarbi          #+#    #+#             */
/*   Updated: 2023/11/16 14:07:03 by zbelarbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t		i;

	i = 0;
	if (dst == NULL && src == NULL)
		return (dst);
	if (src > dst)
	{
		while (i < len)
		{
			*((char *)(dst + i)) = *((const char *)(src + i));
			i++;
		}
	}
	else if (dst > src)
	{
		while (len--)
			*((char *)(dst + len)) = *((const char *)(src + len));
	}
	return (dst);
}
