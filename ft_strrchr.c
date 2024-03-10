/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbelarbi <zbelarbi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 21:30:09 by zbelarbi          #+#    #+#             */
/*   Updated: 2023/11/14 10:12:14 by zbelarbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;
	int	index;

	i = 0;
	index = -1;
	while (s[i])
	{
		if (s[i] == (char)c)
			index = i;
		i++;
	}
	if (index != -1)
		return ((char *)(s + index));
	else if ((char)c == '\0')
		return ((char *)(s + i));
	return (NULL);
}
