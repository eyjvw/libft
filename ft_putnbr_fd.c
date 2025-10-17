/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbonneau <sbonneau@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 01:36:08 by sbonneau          #+#    #+#             */
/*   Updated: 2025/10/15 23:36:46 by sbonneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	num;

	num = n;
	if (num < 0)
	{
		num = -num;
		ft_putchar_fd('-', fd);
	}
	if (num >= 10)
		ft_putnbr_fd(num / 10, fd);
	ft_putchar_fd((num % 10) + '0', fd);
}

//int main(void)
//{
//	int fd = 1;
//	ft_putnbr_fd(0, fd);
//	write(fd, "\n", 1);
//	ft_putnbr_fd(42, fd);
//	write(fd, "\n", 1);
//	ft_putnbr_fd(-42, fd);
//	write(fd, "\n", 1);
//	ft_putnbr_fd(2147483647, fd);
//	write(fd, "\n", 1);
//	ft_putnbr_fd(-2147483648, fd);
//	write(fd, "\n", 1);
//	ft_putnbr_fd(-1, fd);
//	write(fd, "\n", 1);
//	ft_putnbr_fd(1000000, fd);
//	write(fd, "\n", 1);

//	ft_putnbr_fd(123, 2);
//	write(2, "\n", 1);

//	int file_fd = creat("test_putnbr.txt", 0644);
//	if (file_fd != -1) {
//		ft_putnbr_fd(2025, file_fd);
//		write(file_fd, "\n", 1);
//		ft_putnbr_fd(-2025, file_fd);
//		write(file_fd, "\n", 1);
//		close(file_fd);
//	}

//	return (0);
//}
