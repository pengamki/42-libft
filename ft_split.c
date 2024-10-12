/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pengamki <pengamki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 00:25:55 by pengamki          #+#    #+#             */
/*   Updated: 2024/09/15 04:06:45 by pengamki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	subamount(const char *s, char c);
static void	wordinsertion(char **buffer, const char *s, char c);

char	**ft_split(const char *s, char c)
{
	char	**buffer;

	if (!s)
		return (NULL);
	buffer = malloc((subamount(s, c) + 1) * sizeof(char *));
	if (!buffer)
		return (NULL);
	wordinsertion(buffer, s, c);
	return (buffer);
}

static int	subamount(const char *s, char c)
{
	size_t	i;
	int		count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i])
			count++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (count);
}

static void	wordinsertion(char **buffer, const char *s, char c)
{
	const char	*start;
	int			len;

	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
		{
			start = s;
			len = 0;
			while (*s && *s != c)
			{
				len++;
				s++;
			}
			*buffer = ft_substr(start, 0, len);
			buffer++;
		}
	}
	*buffer = NULL;
}

// int main(void)
// {
//     char **buffer = ft_split("Hello World! How are you?", ' ');
//     while (*buffer)
//     {
//         printf("%s\n", *buffer);
//         buffer++;
//     }
// }