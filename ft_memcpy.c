/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pengamki <pengamki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 16:22:02 by pengamki          #+#    #+#             */
/*   Updated: 2024/09/14 00:59:19 by pengamki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*ptr_dest;
	const unsigned char	*ptr_src;
	size_t				i;

	if (!src && !dest)
		return (dest);
	ptr_dest = dest;
	ptr_src = src;
	i = 0;
	while (n--)
	{
		ptr_dest[i] = ptr_src[i];
		i++;
	}
	return (dest);
}

// int main(void)
// {
//     char *s1 = "abcdefghijklmnopqrstuvwxyz";
//     char d1[27];
//     char *s2 = "abcdefghijklmnopqrstuvwxyz";
//     char d2[27];

//     char *og = memcpy(d1, s1, 4);
//     char *ft = ft_memcpy(d2, s2, 4);
//     printf("og: %s\n", og);
//     printf("ft: %s\n", ft);
// }