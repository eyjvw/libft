/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbonneau <sbonneau@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 00:37:51 by sbonneau          #+#    #+#             */
/*   Updated: 2025/10/15 03:55:51 by sbonneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = -1;
	if (!dest && !src)
		return (dest);
	while (++i < n)
		((char *)dest)[i] = ((char *)src)[i];
	return (dest);
}

//int main(void)
//{
//	char src1[] = "abcdef";
//	char dst1[10] = "XXXXXXXXX";
//	char dst2[10] = "XXXXXXXXX";
//	ft_memcpy(dst1, src1, 6);
//	memcpy(dst2, src1, 6);
//	printf("Test 1 - ft_memcpy: %s | memcpy: %s\n", dst1, dst2);

//	char src2[] = "123456789";
//	char dst3[10] = "YYYYYYYYY";
//	char dst4[10] = "YYYYYYYYY";
//	ft_memcpy(dst3, src2, 4);
//	memcpy(dst4, src2, 4);
//	printf("Test 2 - ft_memcpy: %s | memcpy: %s\n", dst3, dst4);

//	char src3[] = "abc";
//	char dst5[5] = "ZZZZ";
//	char dst6[5] = "ZZZZ";
//	ft_memcpy(dst5, src3, 0);
//	memcpy(dst6, src3, 0);
//	printf("Test 3 - ft_memcpy: %s | memcpy: %s\n", dst5, dst6);

//	char src4[] = "ab\0cd";
//	char dst7[6] = "WWWWW";
//	char dst8[6] = "WWWWW";
//	ft_memcpy(dst7, src4, 5);
//	memcpy(dst8, src4, 5);
//	printf("Test 4 - ft_memcpy: ");
//	for (int i = 0; i < 6; i++) printf("%02x ", (unsigned char)dst7[i]);
//	printf("| memcpy: ");
//	for (int i = 0; i < 6; i++) printf("%02x ", (unsigned char)dst8[i]);
//	printf("\n");

//	return (0);
//}
