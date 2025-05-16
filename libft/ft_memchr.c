/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hillesca <hillesca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 01:35:36 by hillesca          #+#    #+#             */
/*   Updated: 2025/05/16 18:59:19 by hillesca         ###   ########.fr       */
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

// #include <stdio.h>

// int	main(int argc, char **argv)
// {
// 	if (argc == 3)
// 		printf("%s", ft_memchr(argv[1], argv[2][0], ft_strlen(argv[1])));
// 	return (0);
// }
