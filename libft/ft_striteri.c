/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hillesca <hillesca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 19:34:53 by hillesca          #+#    #+#             */
/*   Updated: 2025/05/17 04:14:30 by hillesca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

// #include <stdio.h>

// void	shift_char(unsigned int idx, char *c)
// {
// 	*c = *c + 1;
// }

// int	main(void)
// {
// 	char str[] = "abcd";

// 	printf("Before: %s\n", str);
// 	ft_striteri(str, shift_char);
// 	printf("After:  %s\n", str);

// 	return (0);
// }
