/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pengamki <pengamki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 01:52:02 by pengamki          #+#    #+#             */
/*   Updated: 2024/09/21 02:46:12 by pengamki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp_nptr;

	if (!(*lst))
		return ;
	while (*lst)
	{
		tmp_nptr = (*lst)->next;
		ft_lstdelone((*lst), del);
		*lst = tmp_nptr;
	}
}
