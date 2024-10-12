/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pengamki <pengamki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 09:03:04 by pengamki          #+#    #+#             */
/*   Updated: 2024/09/22 01:03:24 by pengamki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	const char	*str;

	str = s;
	while (*str)
		str++;
	return (str - s);
}

// int	main(void)
// {
// 	char *a = "please-please-please";
// 	printf("og: %lu\n", strlen(a));
// 	printf("ft: %zu\n", ft_strlen(a));
// }
