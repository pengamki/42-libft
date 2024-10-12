/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pengamki <pengamki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 15:43:26 by pengamki          #+#    #+#             */
/*   Updated: 2024/09/20 22:02:37 by pengamki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	return ('0' <= c && c <= '9');
}

// int		main(void)
// {
// 	char	*s = "ab12!*\t\n";
// 	printf("og:");
// 	for (int i = 0; i < 8; i++)
// 		if (isdigit(s[i])) printf(" 1");
// 		else printf(" 0");
// 	printf("\n");
// 	printf("ft:");
// 	for (int i = 0; i < 8; i++)
// 		if (ft_isdigit(s[i])) printf(" 1");
// 		else printf(" 0");
// 	printf("\n");
// }