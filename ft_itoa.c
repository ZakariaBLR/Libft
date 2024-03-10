/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbelarbi <zbelarbi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 14:43:10 by zbelarbi          #+#    #+#             */
/*   Updated: 2023/11/16 13:57:00 by zbelarbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_nbr(int nb)
{
	int	count;

	count = 1;
	while (nb / 10)
	{
		count++;
		nb /= 10;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	long	nb;
	char	*ptr;
	int		count;

	nb = n;
	count = count_nbr(nb);
	if (n < 0)
	{
		count++;
		nb *= -1;
	}
	ptr = (char *)malloc(sizeof(char) * (count + 1));
	if (!ptr)
		return (NULL);
	ptr[count--] = '\0';
	while (count >= 0)
	{
		ptr[count] = (nb % 10) + 48;
		nb /= 10;
		count--;
	}
	if (n < 0)
		ptr[0] = '-';
	return (ptr);
}
