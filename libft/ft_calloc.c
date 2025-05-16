/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hillesca <hillesca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 19:25:12 by hillesca          #+#    #+#             */
/*   Updated: 2025/05/16 14:46:45 by hillesca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	void	*ptr;	
	size_t	total;

	if (n == 0 || size == 0)
		return (malloc(0));
	if (size > SIZE_MAX / n)
		return (NULL);
	total = n * size;
	ptr = malloc(total);
	if (ptr == NULL)
		return (NULL);
	return (ft_memset(ptr, 0, total));
}
