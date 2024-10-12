/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pengamki <pengamki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 15:51:07 by pengamki          #+#    #+#             */
/*   Updated: 2024/09/13 16:33:04 by pengamki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*mem;
	size_t			i;

	mem = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (*mem == (unsigned char)c)
			return ((void *)mem);
		mem++;
		i++;
	}
	return (NULL);
}

// int main(void)
// {
//     char *og = "Hello from the other side~";
//     char *m_og = (char *)memchr(og, 't', 12);
//     printf("og: ");
//     for (int i = 0; i < 20; i++)
//         printf("%c", m_og[i]);
//     printf("\n");

//     char *ft = "Hello from the other side~";
//     char *m_ft = (char *)ft_memchr(ft, 't', 12);
//     printf("ft: ");
//     for (int i = 0; i < 20; i++)
//         printf("%c", m_ft[i]);
//     printf("\n");
// }