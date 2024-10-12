/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pengamki <pengamki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 19:14:50 by pengamki          #+#    #+#             */
/*   Updated: 2024/09/14 19:31:18 by pengamki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// static void toupperskip2(unsigned int i, char *c);

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

// static void toupperskip2(unsigned int i, char *c)
// {
//     if (*c >= 'a' && *c <= 'z' && i % 2 == 0)
//         *c = *c - ('a' - 'A');
// }

// int main(void)
// {
//     char	str[] = "aaaaaaaaaaaaaaaaaaaaaaaa";
//     ft_striteri(str, toupperskip2);
//     printf("%s\n", str);
// }
