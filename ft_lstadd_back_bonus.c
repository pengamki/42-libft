/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pengamki <pengamki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 01:15:22 by pengamki          #+#    #+#             */
/*   Updated: 2024/09/21 01:31:46 by pengamki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (!new)
		return ;
	if (!(*lst))
	{
		*lst = new;
		return ;
	}
	ft_lstlast(*lst)->next = new;
}

// int	main(void)
// {
// 	t_list	*l;

// 	t_list *n1, *n2, *n3;
// 	l = ((void *)0);
// 	n1 = ft_lstnew("First");
// 	n2 = ft_lstnew("Sec");
// 	n3 = ft_lstnew("Third");
// 	n1->next = n2;
// 	n2->next = n3;
// 	ft_lstadd_back(&l, n1);
	// free(l);
// }
