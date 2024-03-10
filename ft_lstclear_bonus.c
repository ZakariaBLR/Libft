/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbelarbi <zbelarbi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 03:39:47 by zbelarbi          #+#    #+#             */
/*   Updated: 2023/11/05 05:59:40 by zbelarbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;
	t_list	*current;

	temp = NULL;
	current = NULL;
	if (lst && del)
	{
		temp = *lst;
		while (temp)
		{
			current = temp;
			temp = temp->next;
			del(current->content);
			free(current);
		}
		*lst = NULL;
	}
}
