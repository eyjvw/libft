/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbonneau <sbonneau@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 16:14:44 by sbonneau          #+#    #+#             */
/*   Updated: 2025/10/15 04:04:34 by sbonneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*str;

	str = (unsigned char *)s;
	while (n--)
		*str++ = (unsigned char)c;
	return (s);
}

//void print_buffer(const char *label, const char *buf, size_t n) {
//	printf("%s: ", label);
//	for (size_t i = 0; i < n; i++)
//		printf("%02x ", (unsigned char)buf[i]);
//	printf("\n");
//}

//int main(void)
//{
//	char buf1[8] = "1234567";
//	char buf2[8] = "1234567";
//	ft_memset(buf1, 'A', 7);
//	memset(buf2, 'A', 7);
//	print_buffer("ft_memset", buf1, 8);
//	print_buffer("memset   ", buf2, 8);

//	char buf3[8] = "abcdefg";
//	char buf4[8] = "abcdefg";
//	ft_memset(buf3, 0, 7);
//	memset(buf4, 0, 7);
//	print_buffer("ft_memset", buf3, 8);
//	print_buffer("memset   ", buf4, 8);

//	char buf5[8] = "zzzzzzz";
//	char buf6[8] = "zzzzzzz";
//	ft_memset(buf5, '@', 4);
//	memset(buf6, '@', 4);
//	print_buffer("ft_memset", buf5, 8);
//	print_buffer("memset   ", buf6, 8);

//	char buf7[8] = "ABCDEFG";
//	char buf8[8] = "ABCDEFG";
//	ft_memset(buf7, 'B', 0);
//	memset(buf8, 'B', 0);
//	print_buffer("ft_memset", buf7, 8);
//	print_buffer("memset   ", buf8, 8);

//	char buf9[1] = {0};
//	char buf10[1] = {0};
//	ft_memset(buf9, 'X', 0);
//	memset(buf10, 'X', 0);
//	print_buffer("ft_memset", buf9, 1);
//	print_buffer("memset   ", buf10, 1);

//	return (0);
//}
