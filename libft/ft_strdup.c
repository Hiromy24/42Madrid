/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hillesca <hillesca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/04 23:24:59 by hillesca          #+#    #+#             */
/*   Updated: 2025/05/17 04:08:03 by hillesca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*d_str;
	char	*ptr;

	d_str = malloc(ft_strlen(s) + 1);
	if (d_str == NULL)
		return (NULL);
	ptr = d_str;
	while (*s)
		*d_str++ = *s++;
	d_str = '\0';
	return (ptr);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	cad[] = "hola mundo!";
// 	char	*dup;

// 	dup = ft_strdup(cad);
// 	printf("%s", dup);
// 	return (0);
// }
