/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pengamki <pengamki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 13:26:05 by pengamki          #+#    #+#             */
/*   Updated: 2024/09/14 13:46:33 by pengamki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*str;
	char		*res;
	char		chr;

	str = s;
	chr = (char)c;
	res = NULL;
	while (*str)
	{
		if (*str == chr)
			res = (char *)&*str;
		str++;
	}
	if (*str == chr)
		res = (char *)&*str;
	return (res);
}

// int main(void)
// {
//     char *og = strrchr("returnintg", 't');
//     printf("og: %s\n", og);

//     char *ft = ft_strrchr("returnintg", 't');
//     printf("ft: %s\n", ft);
// }