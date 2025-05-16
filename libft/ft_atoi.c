/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hillesca <hillesca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 22:13:39 by hillesca          #+#    #+#             */
/*   Updated: 2025/05/16 18:53:36 by hillesca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(char *str)
{
	int	value;
	int	sign;

	sign = 1;
	value = 0;
	while ((*str < 14 && *str > 8) || *str == ' ')
		str++;
	if (*str == '-' || *str == '+')
		if (*str++ == '-')
			sign = -1;
	while (*str >= '0' && *str <= '9')
		value = (value * 10) + (*str++ - '0');
	return (value * sign);
}

// #include <stdio.h>

// int	main(int argc, char **argv)
// {
// 	if (argc == 2)
// 		printf("%d", ft_atoi(argv[1]));
// 	return (0);
// }
