/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbonneau <sbonneau@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 01:32:50 by sbonneau          #+#    #+#             */
/*   Updated: 2025/10/15 23:34:23 by sbonneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	while (*s)
		ft_putchar_fd(*s++, fd);
}

//int main(void)
//{
//	int fd = 1;
//	ft_putstr_fd("Hello", fd);
//	ft_putstr_fd("\n", fd);
//	ft_putstr_fd("", fd);
//	ft_putstr_fd("\n", fd);
//	ft_putstr_fd("   ", fd);
//	ft_putstr_fd("\n", fd);
//	ft_putstr_fd("42!@#", fd);
//	ft_putstr_fd("\n", fd);
//	ft_putstr_fd("Ceci est une très longue chaîne de test", fd);
//	ft_putstr_fd("\n", fd);
//	ft_putstr_fd("Line1\nLine2", fd);
//	ft_putstr_fd("\n", fd);

//	ft_putstr_fd("Erreur sur stderr\n", 2);

//	int file_fd = creat("test_putstr.txt", 0644);
//	if (file_fd != -1) {
//		ft_putstr_fd("Ecriture dans un fichier", file_fd);
//		ft_putstr_fd("\n", file_fd);
//		ft_putstr_fd("", file_fd);
//		ft_putstr_fd("\n", file_fd);
//		close(file_fd);
//	}

//	return (0);
//}
