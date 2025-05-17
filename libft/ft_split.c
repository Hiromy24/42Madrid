/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hillesca <hillesca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 02:14:35 by hillesca          #+#    #+#             */
/*   Updated: 2025/05/17 14:07:23 by hillesca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_elem(char const *s, char c)
{
	int	count;
	int	in_elem;

	count = 0;
	in_elem = 0;
	while (*s)
	{
		if (*s != c && !in_elem)
		{
			in_elem = 1;
			count++;
		}
		else if (*s == c)
			in_elem = 0;
		s++;
	}
	return (count);
}

static int	ft_free_arr(char **strs, int j)
{
	while (j)
		free(strs[--j]);
	free(strs);
	return (0);
}

static int	ft_set_elemns(char **strs, char const *s, char c)
{
	int		i;
	int		j;
	int		elem_pos;

	i = 0;
	j = 0;
	elem_pos = -1;
	while (s[i])
	{
		if (s[i] != c && elem_pos == -1)
			elem_pos = i;
		if ((s[i] == c || s[i + 1] == '\0') && elem_pos >= 0)
		{
			if (s[i] == c)
				strs[j] = ft_substr(s, elem_pos, i - elem_pos);
			else
				strs[j] = ft_substr(s, elem_pos, i - elem_pos + 1);
			if (!strs[j++])
				return (ft_free_arr(strs, --j));
			elem_pos = -1;
		}
		i++;
	}
	strs[j] = NULL;
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**strs;

	if (!s)
		return (NULL);
	strs = ft_calloc((ft_count_elem(s, c) + 1), sizeof(char *));
	if (!strs)
		return (NULL);
	if (!ft_set_elemns(strs, s, c))
		return (NULL);
	return (strs);
}

// #include <stdio.h>
// #include <stdlib.h>

// int	main(int argc, char **argv)
// {
// 	char	**res;
// 	int		i;
// 	char	*input;
// 	char	delimiter;

// 	if (argc != 3)
// 		return (1);
// 	input = argv[1];
// 	delimiter = argv[2][0];

// 	res = ft_split(input, delimiter);
// 	if (!res)
// 	{
// 		fprintf(stderr, "failed or returned NULL\n");
// 		return (1);
// 	}
// 	i = 0;
// 	while (res[i] != NULL)
// 	{
// 		printf("  [%d]: %s\n", i, res[i]);
// 		free(res[i]);
// 		i++;
// 	}
// 	free(res);
// 	return (0);
// }
