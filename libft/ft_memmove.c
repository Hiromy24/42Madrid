/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hillesca <hillesca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 03:03:24 by hillesca          #+#    #+#             */
/*   Updated: 2025/05/05 14:13:42 by hillesca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*p_dest;
	unsigned const char	*p_src;

	if (dest == src || !n)
		return (dest);
	if (dest < src)
		return (ft_memcpy(dest, src, n));
	p_dest = (unsigned char *) dest;
	p_src = (unsigned char *) src;
	while (n--)
		p_dest[n] = p_src[n];
	return (dest);
}
