/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pengamki <pengamki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 18:18:02 by pengamki          #+#    #+#             */
/*   Updated: 2024/09/14 18:40:47 by pengamki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*buffer;
	size_t	i;
	size_t	j;

	buffer = (char *)malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (!buffer)
		return (buffer);
	i = 0;
	j = 0;
	while (s1[i])
		buffer[j++] = s1[i++];
	i = 0;
	while (s2[i])
		buffer[j++] = s2[i++];
	buffer[j] = 0;
	return (buffer);
}

// int main(void)
// {
//     printf("%s\n", ft_strjoin("123", "abc"));
// }
