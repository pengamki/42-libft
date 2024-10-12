/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pengamki <pengamki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 12:34:50 by pengamki          #+#    #+#             */
/*   Updated: 2024/09/22 00:57:39 by pengamki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*mem;
	unsigned long	*long_mem;
	size_t			long_count;

	mem = (unsigned char *)s;
	long_mem = (unsigned long *)mem;
	long_count = n / sizeof(unsigned long);
	c = (unsigned char)c;
	while (long_count--)
		*(long_mem++) = (unsigned long)c * 0x0101010101010101UL;
	mem += n - (n % sizeof(unsigned long));
	n %= sizeof(unsigned long);
	while (n--)
		*(mem++) = (unsigned char)c;
	return (s);
}

// int		main(void)
// {
// 	int og[5] = {1, 2, 3, 4, 5};
// 	int ft[5] = {1, 2, 3, 4, 5};
// 	memset(og, 7, (3 * sizeof(int)));
// 	ft_memset(ft, 7, (3 * sizeof(int)));
// 	printf("og:");
// 	for (int i = 0; i < 5; i++)
// 		printf(" %c", og[i] + '0');
// 	printf("\n");

// 	printf("ft:");
// 	for (int i = 0; i < 5; i++)
// 		printf(" %c", ft[i] + '0');
// 	printf("\n");
// }