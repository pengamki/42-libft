/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pengamki <pengamki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 02:12:51 by pengamki          #+#    #+#             */
/*   Updated: 2024/09/21 02:41:49 by pengamki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*head;
	t_list	*nptr;

	if (!lst || !f || !del)
		return (NULL);
	head = ft_lstnew(f(lst->content));
	if (!head)
		return (NULL);
	nptr = head;
	lst = lst->next;
	while (lst)
	{
		nptr->next = ft_lstnew(f(lst->content));
		if (!(nptr->next))
		{
			ft_lstclear(&head, del);
			return (NULL);
		}
		nptr = nptr->next;
		lst = lst->next;
	}
	nptr->next = (NULL);
	return (head);
}
