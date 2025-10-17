/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbonneau <sbonneau@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 02:09:11 by sbonneau          #+#    #+#             */
/*   Updated: 2025/10/15 03:59:37 by sbonneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*d;
	unsigned char	*s;

	if (!dst && !src)
		return (NULL);
	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	if (d > s)
	{
		while (len-- > 0)
			d[len] = s[len];
	}
	else
	{
		i = 0;
		while (i < len)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (dst);
}

//int main(void)
//{
//	char src1[] = "abcdef";
//	char dst1[10] = "XXXXXXXXX";
//	char dst2[10] = "XXXXXXXXX";
//	ft_memmove(dst1, src1, 6);
//	memmove(dst2, src1, 6);
//	printf("Test 1 - ft_memmove: %s | memmove: %s\n", dst1, dst2);

//	char buf1[10] = "123456789";
//	char buf2[10] = "123456789";
//	ft_memmove(buf1 + 2, buf1, 5);
//	memmove(buf2 + 2, buf2, 5);
//	printf("Test 2 - ft_memmove: %s | memmove: %s\n", buf1, buf2);

//	char buf3[10] = "abcdefghi";
//	char buf4[10] = "abcdefghi";
//	ft_memmove(buf3, buf3 + 2, 5);
//	memmove(buf4, buf4 + 2, 5);
//	printf("Test 3 - ft_memmove: %s | memmove: %s\n", buf3, buf4);

//	char buf5[5] = "ZZZZ";
//	char buf6[5] = "ZZZZ";
//	ft_memmove(buf5, buf5, 0);
//	memmove(buf6, buf6, 0);
//	printf("Test 4 - ft_memmove: %s | memmove: %s\n", buf5, buf6);

//	char src2[] = "ab\0cd";
//	char dst3[6] = "WWWWW";
//	char dst4[6] = "WWWWW";
//	ft_memmove(dst3, src2, 5);
//	memmove(dst4, src2, 5);
//	printf("Test 5 - ft_memmove: ");
//	for (int i = 0; i < 6; i++) printf("%02x ", (unsigned char)dst3[i]);
//	printf("| memmove: ");
//	for (int i = 0; i < 6; i++) printf("%02x ", (unsigned char)dst4[i]);
//	printf("\n");

//	return (0);
//}
