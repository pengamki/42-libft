/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pengamki <pengamki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 01:34:01 by pengamki          #+#    #+#             */
/*   Updated: 2024/09/21 01:54:51 by pengamki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	del(lst->content);
	free(lst);
}

// // static void f_free(void* str);

// int main(void)
// {
//     t_list *n1, *n2, *n3;

//     n1 = ft_lstnew("first.");
//     n2 = ft_lstnew("sec.");
//     n3 = ft_lstnew("third.");
//     n1->next = n2;
//     n2->next = n3;

//     ft_lstdelone(n1, free);
//     // ft_lstdelone(n1, f_free);
// }

// // static void f_free(void* str)
// // {
// //     free(str);
// // }
