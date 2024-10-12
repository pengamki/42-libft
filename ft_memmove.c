/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pengamki <pengamki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 16:44:33 by pengamki          #+#    #+#             */
/*   Updated: 2024/09/14 01:24:34 by pengamki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*ptr_dest;
	const unsigned char	*ptr_src;

	if (!src && !dest)
		return (dest);
	if (src == dest)
		return (dest);
	ptr_dest = dest;
	ptr_src = src;
	if (ptr_dest < ptr_src)
		ft_memcpy(ptr_dest, ptr_src, n);
	else
	{
		while (n--)
			ptr_dest[n] = ptr_src[n];
	}
	return (dest);
}

// int main(void)
// {
//     char src1[10] = "123456789";
//     char *og = memmove(src1 + 2, src1, 5);
//     printf("og: %s\n", og);

//     char src2[10] = "123456789";
//     char *ft = ft_memmove(src2 + 2, src2, 5);
//     printf("og: %s\n", ft);
// }