/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hillesca <hillesca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 16:58:19 by hillesca          #+#    #+#             */
/*   Updated: 2025/05/17 13:33:04 by hillesca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	dest_len;
	size_t	src_len;
	size_t	i;

	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	if (dest_len >= size)
		return (size + src_len);
	i = 0;
	while (src[i] && (dest_len + i + 1) < size)
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest_len + src_len);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char 		dest[10] = "Hi";
// 	const char	*src = "ABC";
// 	size_t 		size = sizeof(dest);
// 	size_t 		total;

// 	printf("Before:\"%s\"\n", dest);
// 	total = ft_strlcat(dest, src, size);
// 	printf("After:\"%s\"\n", dest);
// 	printf("Returned: %zu\n", total);

//     return (0);
// }
