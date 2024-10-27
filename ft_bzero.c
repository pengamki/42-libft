/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pengamki <pengamki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 02:32:47 by pengamki          #+#    #+#             */
/*   Updated: 2024/09/21 10:58:10 by pengamki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*p;

	p = s;
	while (n >= 4)
	{
		*p++ = 0;
		*p++ = 0;
		*p++ = 0;
		*p++ = 0;
		n -= 4;
	}
	while (n--)
		*p++ = 0;
}

// int		main(void)
// {
// 	char og[5] = {1, 2, 3, 4, 5};
// 	char ft[5] = {1, 2, 3, 4, 5};
// 	bzero(og, 3);
// 	ft_bzero(ft, 3);
// 	printf("og:");
// 	for (int i = 0; i < 5; i++)
// 		printf(" %c", og[i] + '0');
// 	printf("\n");
// 	printf("ft:");
// 	for (int i = 0; i < 5; i++)
// 		printf(" %c", ft[i] + '0');
// 	printf("\n");
// }
