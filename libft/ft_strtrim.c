/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hillesca <hillesca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 02:00:13 by hillesca          #+#    #+#             */
/*   Updated: 2025/05/17 13:54:45 by hillesca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_contains(char c, const char *set)
{
	while (*set)
	{
		if (c == *set++)
			return (1);
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	start;
	size_t	end;
	size_t	len;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (s1[start] && ft_contains(s1[start], set))
		start++;
	end = ft_strlen(s1);
	while (ft_contains(s1[end - 1], set) && end > start)
		end--;
	len = end - start;
	str = malloc(len + 1);
	if (!str)
		return (NULL);
	ft_memcpy(str, s1 + start, len);
	str[len] = '\0';
	return (str);
}

// #include <stdio.h>

// int	main(int argc, char **argv)
// {
// 	char	*res;

// 	if (argc == 3)
// 	{
// 		res = ft_strtrim(argv[1], argv[2]);
// 		if (res)
// 		{
// 			printf("%s", res);
// 			free(res);
// 		}
// 	}
// 	return (0);
// }
