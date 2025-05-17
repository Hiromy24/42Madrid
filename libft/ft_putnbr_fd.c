/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hillesca <hillesca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 19:16:02 by hillesca          #+#    #+#             */
/*   Updated: 2025/05/17 02:04:10 by hillesca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	ft_putnbr_fd(int n, int fd)
{
	char	*n_str;

	n_str = ft_itoa(n);
	write(fd, n_str, ft_strlen(n_str));
}

// #include <fcntl.h>
// #include <stdio.h>

// int	main(void)
// {
// 	ft_putnbr_fd(20, 1);
// 	printf("%s", "\n");
// 	int fd = open("B.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
// 	if (fd == -1)
// 	{
// 		perror("Error al abrir archivo");
// 		return (1);
// 	}
// 	ft_putnbr_fd(10, fd);
// 	close(fd);
// 	printf("'B.txt' created.\n");
// 	return (0);
// }