/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbelarbi <zbelarbi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 15:50:09 by zbelarbi          #+#    #+#             */
/*   Updated: 2023/11/13 22:32:58 by zbelarbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	check_sep(char s, const char *sep)
{
	size_t	i;

	i = 0;
	while (sep[i])
	{
		if (sep[i] == s)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*ptr;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (check_sep(s1[start], set) == 1)
		start++;
	end = ft_strlen(s1) - 1;
	while (check_sep(s1[end], set) == 1)
		end--;
	if (end - start < 0)
		return (ft_strdup(""));
	ptr = ft_substr(s1, start, (end - start + 1));
	return (ptr);
}
