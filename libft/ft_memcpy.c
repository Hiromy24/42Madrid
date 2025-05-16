/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hillesca <hillesca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 15:46:33 by hillesca          #+#    #+#             */
/*   Updated: 2025/05/16 19:47:00 by hillesca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*p_dest;
	unsigned char	*p_src;

	p_dest = (unsigned char *) dest;
	p_src = (unsigned char *) src;
	while (n--)
		*p_dest++ = *p_src++;
	return (dest);
}

// #include <stdio.h>
// #include <string.h>

// int	main(int argc, char **argv)
// {
// 	char	*cad[8];
// 	char	*cad2[8];

// 	if (argc == 2)
// 	{
// 		printf("%s\n", ft_memcpy(cad, argv[1], 8));
// 		printf("%s\n", memcpy(cad2, argv[1], 8));
// 	}
// 	return (0);
// }
