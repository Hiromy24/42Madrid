/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hillesca <hillesca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 01:23:39 by hillesca          #+#    #+#             */
/*   Updated: 2025/05/17 13:37:10 by hillesca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t m)
{
	while ((*s1 || *s2) && m--)
	{
		if ((unsigned char) *s1 != (unsigned char) *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	return (0);
}

// #include <stdio.h>
// #include <string.h>

// int	main(int argc, char **argv)
// {
// 	if (argc == 3)
// 	{
// 		printf("%d", strncmp(argv[1], argv[2], 8));
// 		printf("%d", ft_strncmp(argv[1], argv[2], 8));
// 	}
// 	return (0);
// }
