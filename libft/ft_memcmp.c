/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hillesca <hillesca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 02:09:21 by hillesca          #+#    #+#             */
/*   Updated: 2025/05/05 16:33:21 by hillesca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	const unsigned char	*d_str1;
	const unsigned char	*d_str2;

	d_str1 = (const unsigned char *) str1;
	d_str2 = (const unsigned char *) str2;
	while (n--)
	{
		if (*d_str1 != *d_str2)
			return (*d_str1 - *d_str2);
		d_str1++;
		d_str2++;
	}
	return (0);
}
