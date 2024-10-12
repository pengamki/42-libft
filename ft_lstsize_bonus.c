/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pengamki <pengamki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 00:55:54 by pengamki          #+#    #+#             */
/*   Updated: 2024/09/21 01:30:19 by pengamki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		size;
	t_list	*nptr;

	size = 0;
	nptr = lst;
	while (nptr)
	{
		size++;
		nptr = nptr->next;
	}
	return (size);
}

// int main(void)
// {
//     t_list *n1, *n2, *n3;

//     n1 = ft_lstnew("1");
//     n2 = ft_lstnew("2");
//     n3 = ft_lstnew("3");

//     n1->next = n2;
//     n2->next = n3;

//     printf("%d\n", ft_lstsize(n1));
//     free(n1);
//     free(n2);
//     free(n3);
// }