/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pengamki <pengamki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 15:20:37 by pengamki          #+#    #+#             */
/*   Updated: 2024/09/20 22:04:12 by pengamki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	return (((unsigned)c | 32) - 'a' < 26);
}

// explanation
// since___ 32 = 00 10 00 00
// lowercase a = 01 10 00 01
// uppercase A = 01 00 00 01
// (unsigned)c | 32 is forcing alphabet to be lowercase
