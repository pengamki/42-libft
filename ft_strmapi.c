/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pengamki <pengamki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 20:35:20 by pengamki          #+#    #+#             */
/*   Updated: 2024/09/14 20:39:18 by pengamki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	char	*buffer;
	size_t	i;

	buffer = (char *)malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!buffer)
		return (buffer);
	i = 0;
	while (s[i])
	{
		buffer[i] = f(i, s[i]);
		i++;
	}
	buffer[i] = 0;
	return (buffer);
}

// static char toupperskip2(unsigned int i, char c)
// {
//     if (c >= 'a' && c <= 'z' && i % 2 == 0)
//         return (c - ('a' - 'A'));
//     return (c);
// }

// int main(void)
// {
//     char	str[] = "aaaaaaaaaaaaaaaaaaaaaaaa";
//     printf("%s\n", ft_strmapi(str, toupperskip2));
// }