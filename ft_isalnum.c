/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pengamki <pengamki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 21:01:32 by pengamki          #+#    #+#             */
/*   Updated: 2024/09/20 22:04:35 by pengamki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	return (ft_isdigit(c) || ft_isalpha(c));
}

// int		main(void)
// {
// 	char	*s = "ab12!*\t\n";
// 	printf("og:");
// 	for (int i = 0; i < 8; i++)
// 		if (isalnum(s[i])) printf(" 1");
// 		else printf(" 0");
// 	printf("\n");
// 	printf("ft:");
// 	for (int i = 0; i < 8; i++)
// 		if (ft_isalnum(s[i])) printf(" 1");
// 		else printf(" 0");
// 	printf("\n");
// }
