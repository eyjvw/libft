/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbonneau <sbonneau@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 01:30:08 by sbonneau          #+#    #+#             */
/*   Updated: 2025/10/15 04:07:19 by sbonneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

//int main(void)
//{
//    int fd = 1; // stdout
//    ft_putchar_fd('A', fd);
//    ft_putchar_fd('5', fd);
//    ft_putchar_fd('@', fd);
//    ft_putchar_fd(' ', fd);
//    ft_putchar_fd('\n', fd);
//    ft_putchar_fd('\0', fd);

//    ft_putchar_fd('E', 2);

//    int file_fd = creat("test_putchar.txt", 0644);
//    if (file_fd != -1) {
//        ft_putchar_fd('F', file_fd);
//        ft_putchar_fd('\n', file_fd);
//        close(file_fd);
//    }

//    return (0);
//}
