/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pengamki <pengamki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 02:03:14 by pengamki          #+#    #+#             */
/*   Updated: 2024/09/21 02:12:16 by pengamki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}

// int main(void)
// {
//     t_list *n1, *n2, *n3;

//     n1 = ft_lstnew("fst."), n2 = ft_lstnew("sec."), n3 = ft_lstnew("trd.");
//     n1->next = n2;
//     n2->next = n3;

//     t_list *nptr;
//     nptr = n1;

//     ft_lstiter(nptr, ft_striteri(nah));

//     free(n1);
//     free(n2);
//     free(n3);
// }
