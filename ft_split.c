/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbelarbi <zbelarbi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 11:32:09 by zbelarbi          #+#    #+#             */
/*   Updated: 2023/11/08 17:34:54 by zbelarbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_strings(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		if (s[i] != c && s[i])
			count++;
		while (s[i] != c && s[i])
			i++;
	}
	return (count);
}

static void	*ft_free(char **strs, int i)
{
	while (i--)
		free(strs[i]);
	free(strs);
	return (NULL);
}

static char	**fill_words(char **strs, const char *s, char c, int count)
{
	int	i;
	int	j;
	int	len;

	i = 0;
	j = 0;
	while (s[j] && i < count)
	{
		len = 0;
		while (s[j] == c && s[j])
			j++;
		while (s[j + len] != c && s[j + len])
			len++;
		if (len != 0)
		{
			strs[i] = malloc(len + 1);
			if (!strs[i])
				return (ft_free(strs, i));
			ft_strlcpy(strs[i], (s + j), len + 1);
			j += len;
			i++;
		}
	}
	strs[i] = NULL;
	return (strs);
}

char	**ft_split(char const *s, char c)
{
	char	**strs;

	if (!s)
		return (NULL);
	strs = (char **)malloc((count_strings(s, c) + 1) * sizeof(char *));
	if (!strs)
		return (NULL);
	return (fill_words(strs, s, c, count_strings(s, c)));
}
