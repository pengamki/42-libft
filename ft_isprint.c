/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pengamki <pengamki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 16:31:10 by pengamki          #+#    #+#             */
/*   Updated: 2024/09/20 22:02:59 by pengamki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	return (32 <= c && c <= 126);
}

// int		main(void)
// {
// 	char	*s = "ab12!*\t\n";
// 	printf("og:");
// 	for (int i = 0; i < 8; i++)
// 		if (isprint(s[i])) printf(" 1");
// 		else printf(" 0");
// 	printf("\n");
// 	printf("ft:");
// 	for (int i = 0; i < 8; i++)
// 		if (ft_isprint(s[i])) printf(" 1");
// 		else printf(" 0");
// 	printf("\n");
// }