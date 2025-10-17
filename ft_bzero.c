/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbonneau <sbonneau@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 01:23:12 by sbonneau          #+#    #+#             */
/*   Updated: 2025/10/15 03:22:58 by sbonneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}

//int	main(void)
//{
//	char buffer1[10] = "abcdefghi";
//	char buffer2[10] = "abcdefghi";

//	ft_bzero(buffer1, 5);
//	bzero(buffer2, 5);

//	printf("ft_bzero : ");
//	for (int i = 0; i < 10; i++)
//		printf("%d ", buffer1[i]);
//	printf("\n");

//	printf("bzero    : ");
//	for (int i = 0; i < 10; i++)
//		printf("%d ", buffer2[i]);
//	printf("\n");

//	return 0;
//}
