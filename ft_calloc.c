/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pengamki <pengamki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 15:07:13 by pengamki          #+#    #+#             */
/*   Updated: 2024/09/21 11:52:27 by pengamki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t			total;
	unsigned char	*alloc;

	if (nmemb <= 0 || size <= 0)
		return ((void *)malloc(0));
	if (nmemb > SIZE_MAX / size)
		return (NULL);
	total = nmemb * size;
	alloc = malloc(total);
	if (!alloc)
		return (NULL);
	ft_bzero(alloc, total);
	return ((void *)alloc);
}

// int main(void)
// {
//     char *og = (char *)calloc(10, sizeof(char));
//     if (og == NULL) return (0);
//     printf("og(10):");
//     for (int i = 0; i < 42; i++)
//         printf(" %d", og[i]);
//     printf("\n");
//     char *ft = (char *)ft_calloc(10, sizeof(char));
//     if (ft == NULL) return (0);
//     printf("ft(10):");
//     for (int i = 0; i < 42; i++)
//         printf(" %d", ft[i]);
//     printf("\n");
// }