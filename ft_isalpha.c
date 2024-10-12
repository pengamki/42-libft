/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pengamki <pengamki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 15:20:37 by pengamki          #+#    #+#             */
/*   Updated: 2024/09/20 22:04:12 by pengamki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	return (('A' <= c && c <= 'Z') || ('a' <= c && c <= 'z'));
}

// int		main(void)
// {
// 	char	*s = "ab1A!*\t\n";
// 	printf("og:");
// 	for (int i = 0; i < 8; i++)
// 		if (isalpha(s[i])) printf(" 1");
// 		else printf(" 0");
// 	printf("\n");
// 	printf("ft:");
// 	for (int i = 0; i < 8; i++)
// 		if (ft_isalpha(s[i])) printf(" 1");
// 		else printf(" 0");
// 	printf("\n");
// }