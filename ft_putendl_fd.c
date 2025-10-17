/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbonneau <sbonneau@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 02:57:52 by sbonneau          #+#    #+#             */
/*   Updated: 2025/10/15 04:09:48 by sbonneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}

//int main(void)
//{
//	int fd = 1;
//	ft_putendl_fd("Hello", fd);
//	ft_putendl_fd("", fd);
//	ft_putendl_fd("   ", fd);
//	ft_putendl_fd("42!@#", fd);
//	ft_putendl_fd("Line1\\nLine2", fd);

//	ft_putendl_fd("Ceci est une très longue chaîne de test ",fd);

//	ft_putendl_fd("Erreur sur stderr", 2);

//	int file_fd = creat("test_putendl.txt", 0644);
//	if (file_fd != -1) {
//		ft_putendl_fd("Ecriture dans un fichier", file_fd);
//		ft_putendl_fd("", file_fd);
//		close(file_fd);
//	}

//	return (0);
//}
