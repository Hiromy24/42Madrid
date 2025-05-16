/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hillesca <hillesca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 01:35:36 by hillesca          #+#    #+#             */
/*   Updated: 2025/05/05 19:25:11 by hillesca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	const unsigned char	*d_str;

	d_str = (const unsigned char *) str;
	while (n--)
	{
		if (*d_str == (unsigned char) c)
			return ((void *) d_str);
		d_str++;
	}
	return (NULL);
}
