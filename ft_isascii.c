/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pengamki <pengamki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 16:24:15 by pengamki          #+#    #+#             */
/*   Updated: 2024/09/20 22:05:50 by pengamki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	return (0 <= c && c < 128);
}

// int		main(void)
// {
// 	char	*s = "ab12!*\t\n";
// 	printf("og:");
// 	for (int i = 0; i < 8; i++)
// 		if (isascii(s[i])) printf(" 1");
// 		else printf(" 0");
// 	printf("\n");
// 	printf("ft:");
// 	for (int i = 0; i < 8; i++)
// 		if (ft_isascii(s[i])) printf(" 1");
// 		else printf(" 0");
// 	printf("\n");
// }