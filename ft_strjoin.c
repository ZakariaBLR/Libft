/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbelarbi <zbelarbi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 15:32:32 by zbelarbi          #+#    #+#             */
/*   Updated: 2023/11/04 22:48:16 by zbelarbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len;
	size_t	len2;
	char	*ptr;

	if (!s1 || !s2)
		return (NULL);
	len = ft_strlen(s1) + ft_strlen(s2);
	ptr = (char *)malloc(len + 1);
	if (!ptr)
		return (NULL);
	len = 0;
	while (len < ft_strlen(s1))
	{
		ptr[len] = s1[len];
		len++;
	}
	len2 = 0;
	while (len2 < ft_strlen(s2))
	{
		ptr[len + len2] = s2[len2];
		len2++;
	}
	ptr[len + len2] = '\0';
	return (ptr);
}
