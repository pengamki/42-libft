/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pengamki <pengamki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 15:07:13 by pengamki          #+#    #+#             */
/*   Updated: 2024/09/21 11:52:27 by pengamki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*new;

	if (nmemb <= 0 || size <= 0)
		return (malloc(0));
	if (nmemb > SIZE_MAX / size)
		return (NULL);
	new = malloc(nmemb * size);
	if (!new)
		return (NULL);
	ft_bzero(new, nmemb * size);
	return (new);
}

// Define the Problem
// Design the Solution
// Input and Validation
// Process the Data
// Output the Results
// Error Handling
// Optimize and Refactor
// Test and Debug
