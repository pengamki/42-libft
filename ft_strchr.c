/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pengamki <pengamki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 13:14:44 by pengamki          #+#    #+#             */
/*   Updated: 2024/09/14 13:46:26 by pengamki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	const char	*str;
	char		chr;

	str = s;
	chr = (char)c;
	while (*str)
	{
		if (*str == chr)
			return ((char *)&*str);
		str++;
	}
	if (*str == chr)
		return ((char *)&*str);
	return (NULL);
}

// int main(void)
// {
//     char *og = strchr("returnintg", 't');
//     printf("og: %s\n", og);

//     char *ft = ft_strchr("returnintg", 't');
//     printf("ft: %s\n", ft);
// }