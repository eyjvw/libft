/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbonneau <sbonneau@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 02:00:21 by sbonneau          #+#    #+#             */
/*   Updated: 2025/10/15 04:27:11 by sbonneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	dst_len;
	size_t	src_len;

	i = 0;
	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (size <= dst_len)
		return (src_len + size);
	while (src[i] && dst_len + i < size - 1)
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	if (dst_len + i < size)
		dst[dst_len + i] = '\0';
	return (dst_len + src_len);
}

//void print_result(const char *label, char *dst, size_t ret, size_t size) {
//	printf("%s | dst: \"%s\" | ret: %zu | size: %zu\n", label, dst, ret, size);
//}

//int main(void)
//{
//	struct {
//		char dst[50];
//		const char *src;
//		size_t size;
//	} tests[] = {
//		{"Hello", "World", 10},
//		{"Hello", "World", 3},
//		{"", "abc", 5},
//		{"", "", 1},
//		{"42!@#", "$$$", 10},
//		{"LongDest", "Short", 20},
//		{"abc", "def", 0},
//		{"abc", "def", 3},
//		{"abc", "def", 4},
//		{"abc", "def", 6}
//	};

//	int num_tests = sizeof(tests) / sizeof(tests[0]);
//	for (int i = 0; i < num_tests; i++) {
//		char dst1[50], dst2[50];
//		strcpy(dst1, tests[i].dst);
//		strcpy(dst2, tests[i].dst);
//		size_t ret_std = strlcat(dst1, tests[i].src, tests[i].size);
//		size_t ret_ft = ft_strlcat(dst2, tests[i].src, tests[i].size);
//		printf("Test %d:\n", i + 1);
//		print_result("strlcat", dst1, ret_std, tests[i].size);
//		print_result("ft_strlcat", dst2, ret_ft, tests[i].size);
//		printf("----\n");
//	}
//	return 0;
//}
