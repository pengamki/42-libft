/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pengamki <pengamki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 16:29:00 by pengamki          #+#    #+#             */
/*   Updated: 2024/09/13 21:40:05 by pengamki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*ptr_s1 = s1;
	const unsigned char	*ptr_s2 = s2;
	size_t				i;

	i = 0;
	while (i < n)
	{
		if (ptr_s1[i] != ptr_s2[i])
			return (ptr_s1[i] - ptr_s2[i]);
		i++;
	}
	return (0);
}

// int main(void)
// {
//     char *s1 = "ABCDEFGHIJK";
//     char *s2 = "ABCDEFUandYour...";
//     // G = 71, U = 85, G - U == -14
//     printf("og: %d\n", memcmp(s1, s2, 10));
//     printf("ft: %d\n", ft_memcmp(s1, s2, 10));
// }