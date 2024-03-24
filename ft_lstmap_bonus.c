/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbelarbi <zbelarbi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 05:01:05 by zbelarbi          #+#    #+#             */
/*   Updated: 2023/11/11 15:20:32 by zbelarbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*temp;
	t_list	*newlst;

	newlst = NULL;
	if (lst && f && del)
	{
		while (lst)
		{
			temp = ft_lstnew(NULL);
			if (!temp)
			{
				ft_lstclear(&newlst, del);
				return (NULL);
			}
			temp->content = f(lst->content);
			ft_lstadd_back(&newlst, temp);
			lst = lst->next;
		}
	}
	return (newlst);
}
