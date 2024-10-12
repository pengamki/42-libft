/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pengamki <pengamki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 01:08:35 by pengamki          #+#    #+#             */
/*   Updated: 2024/09/21 01:44:14 by pengamki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}

// int	main(void)
// {
// 	t_list	*n1, *n2, *n3;
// 	t_list	*nptr;

// 	n1 = ft_lstnew("smth"), n2 = ft_lstnew("smalso");
// 	n1->next = n2;
// 	n3 = ft_lstnew("aloha");
// 	nptr = n1;
// 	ft_lstadd_front(&nptr, n3);
// 	while (nptr)
// 	{
// 		ft_putstr_fd(nptr->content, 1);
// 		nptr = nptr->next;
// 	}
// 	free(n1);
// 	free(n2);
// 	free(n3);
// }
