/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pengamki <pengamki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 20:45:39 by pengamki          #+#    #+#             */
/*   Updated: 2024/09/14 22:13:14 by pengamki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_numlen(int n);

char	*ft_itoa(int n)
{
	char	*buffer;
	size_t	len;

	len = ft_numlen(n);
	buffer = (char *)malloc((len + 1) * sizeof(char));
	if (!buffer)
		return (buffer);
	buffer[len] = 0;
	if (n < 0)
		buffer[0] = '-';
	if (n == 0)
		buffer[0] = '0';
	while (n)
	{
		if (n < 0)
			buffer[--len] = '0' - n % 10;
		else
			buffer[--len] = '0' + n % 10;
		n /= 10;
	}
	return (buffer);
}

static size_t	ft_numlen(int n)
{
	size_t	len;

	len = 0;
	if (n <= 0)
		len++;
	while (n)
	{
		n /= 10;
		len++;
	}
	return (len);
}

// int	main(void)
// {
// 	printf("%s\n", ft_itoa(0));
// 	printf("%s\n", ft_itoa(42));
// 	printf("%s\n", ft_itoa(-42));
// 	printf("%s\n", ft_itoa(2147483647));
// 	printf("%s\n", ft_itoa(-2147483648));
// }