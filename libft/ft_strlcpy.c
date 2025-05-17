/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hillesca <hillesca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 16:58:18 by hillesca          #+#    #+#             */
/*   Updated: 2025/05/17 05:09:13 by hillesca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src,	size_t size)
{
	size_t	len;

	len = ft_strlen(src);
	if (size == 0)
		return (len);
	while (*src && --size)
		*dest++ = *src++;
	if (size != 0)
		*dest = '\0';
	return (len);
}

// #include <stdio.h>

// int	main(void)
// {
// 	const char 	*src = "HelloWorld";
// 	char 		dest[6];
// 	size_t size = sizeof(dest);
// 	size_t 		ret;

// 	dest[0] = '\0';
// 	printf("Source: '%s'\n", src);
// 	printf("size: %zu\n", size);
// 	ret = ft_strlcpy(dest, src, size);
// 	printf("dest: '%s'\n", dest);
// 	printf("%zu (length of src)\n", ret);
// 	return (0);
// }
