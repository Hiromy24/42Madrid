/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hillesca <hillesca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 21:50:56 by hillesca          #+#    #+#             */
/*   Updated: 2025/05/17 01:31:26 by hillesca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	while (n--)
		*ptr++ = (unsigned char)c;
	return (s);
}

// #include <stdio.h>

// int	main(int argc, char **argv)
// {
// 	char	cad[4];

// 	if (argc == 2)
// 	{
// 		ft_memset(cad, argv[1][0], 4);
// 		printf("%s", cad);
// 	}
// 	return (0);
// }
