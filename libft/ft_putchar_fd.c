/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hillesca <hillesca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 18:51:30 by hillesca          #+#    #+#             */
/*   Updated: 2025/05/17 01:45:38 by hillesca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	ft_putchar_fd(char c, int fd)
{
	write (fd, &c, 1);
}

// #include <fcntl.h>
// #include <stdio.h>

// int	main(void)
// {
// 	ft_putchar_fd('A', 1);
// 	ft_putchar_fd('\n', 1);

// 	int fd = open("B.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
// 	if (fd == -1)
// 	{
// 		perror("Error al abrir archivo");
// 		return (1);
// 	}
// 	ft_putchar_fd('B', fd);
// 	ft_putchar_fd('\n', fd);
// 	close(fd);
// 	printf("'B.txt' created.\n");
// 	return (0);
// }
