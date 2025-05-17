/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hillesca <hillesca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 01:05:34 by hillesca          #+#    #+#             */
/*   Updated: 2025/05/17 04:28:54 by hillesca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdint.h>
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*j_str;
	size_t	len_s1;
	size_t	len_s2;

	if (!s1 || !s2)
		return (NULL);
	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	if (len_s1 > SIZE_MAX - len_s2 - 1)
		return (NULL);
	j_str = malloc((len_s1 + len_s2) + 1);
	if (j_str == NULL)
		return (NULL);
	ft_memcpy(j_str, s1, len_s1);
	ft_memcpy(j_str + len_s1, s2, len_s2);
	j_str[len_s1 + len_s2] = '\0';
	return (j_str);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	cad[] = "hola ";
// 	char	cad2[] = "mundo";
// 	char	*join;

// 	join = ft_strjoin(cad, cad2);
// 	if (join)
// 		printf("%s\n", join);
// 	return (0);
// }
