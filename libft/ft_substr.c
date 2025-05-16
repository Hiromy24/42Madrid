/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hillesca <hillesca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/04 23:55:46 by hillesca          #+#    #+#             */
/*   Updated: 2025/05/06 23:28:22 by hillesca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*d_str;
	char	*ptr;
	size_t	s_len;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len)
		return (ft_strdup(""));
	if (len > s_len - start)
		len = s_len - start;
	d_str = malloc(len + 1);
	if (d_str == NULL)
		return (NULL);
	ptr = d_str;
	while (len-- && s[start])
		*d_str++ = s[start++];
	*d_str = '\0';
	return (ptr);
}
