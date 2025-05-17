/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hillesca <hillesca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 19:04:52 by hillesca          #+#    #+#             */
/*   Updated: 2025/05/17 01:54:13 by hillesca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}

// #include <fcntl.h>
// #include <stdio.h>

// int	main(void)
// {
// 	ft_putendl_fd("A", 1);
// 	ft_putendl_fd("\n", 1);

// 	int fd = open("B.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
// 	if (fd == -1)
// 	{
// 		perror("Error al abrir archivo");
// 		return (1);
// 	}
// 	ft_putendl_fd("B", fd);
// 	close(fd);
// 	printf("'B.txt' created.\n");
// 	return (0);
// }
