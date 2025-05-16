/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hillesca <hillesca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 02:09:21 by hillesca          #+#    #+#             */
/*   Updated: 2025/05/16 19:19:47 by hillesca         ###   ########.fr       */
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

// #include <stdio.h>
// #include <string.h>

// int	main(int argc, char **argv)
// {
// 	int	len;

// 	if (argc == 3)
// 	{
// 		len = ft_strlen(argv[1]) + ft_strlen(argv[2]);
// 		printf("%d", memcmp(argv[1], argv[2], len));
// 		printf("%d", ft_memcmp(argv[1], argv[2], len));
// 	}
// 	return (0);
// }
