/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pengamki <pengamki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 14:06:28 by pengamki          #+#    #+#             */
/*   Updated: 2024/09/15 00:21:54 by pengamki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while ((s1[i] || s2[i]) && i < n)
	{
		if ((unsigned char)s1[i] != (unsigned char)s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}

// int main(void)
// {
//     printf("%d\n", ft_strncmp("Hello", "Hello", 5));
//     printf("%d\n", ft_strncmp("Hello", "Helxo", 3));
//     printf("%d\n", ft_strncmp("Hello", "Hello", 0));
//     printf("%d\n", ft_strncmp("Hello", "Hello", 1));
//     printf("%d\n", ft_strncmp("Hello", "Hxllo", 6));
// }