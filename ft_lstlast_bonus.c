/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pengamki <pengamki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 00:36:28 by pengamki          #+#    #+#             */
/*   Updated: 2024/09/21 00:55:02 by pengamki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*tail;

	if (lst == NULL)
		return (0);
	tail = lst;
	while (tail->next)
	{
		tail = tail->next;
	}
	return (tail);
}

// int main(void)
// {
//     t_list *head;
//     t_list *tail;

//     head = ft_lstnew("AAA");
//     tail = ft_lstnew("BBB");
//     head->next = tail;

//     ft_putstr_fd(ft_lstlast(head)->content, 1);
//     free(head);
//     free(tail);
// }