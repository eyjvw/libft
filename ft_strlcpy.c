/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbonneau <sbonneau@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 01:55:14 by sbonneau          #+#    #+#             */
/*   Updated: 2025/10/15 20:56:10 by sbonneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = ft_strlen(src);
	if (size == 0)
		return (len);
	while (src[i] && i < size - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (len);
}

// void print_result(const char *label, char *dst, size_t ret, size_t size) {
//	printf("%s | dst: \"%s\" | ret: %zu | size: %zu\n", label, dst, ret, size);
//}

// int main(void)
//{
//	struct {
//		char src[50];
//		size_t size;
//	} tests[] = {
//		{"Hello", 10},
//		{"World", 3},
//		{"", 5},
//		{"42!@#", 10},
//		{"Ceci est une très longue chaîne de test", 8},
//		{"abc", 0},
//		{"abc", 3},
//		{"abc", 4},
//		{"Line1\nLine2", 20}
//	};

//	int num_tests = sizeof(tests) / sizeof(tests[0]);
//	for (int i = 0; i < num_tests; i++) {
//		char dst1[50] = "XXXXXXXXXXXX";
//		char dst2[50] = "XXXXXXXXXXXX";
//		size_t ret_std = strlcpy(dst1, tests[i].src, tests[i].size);
//		size_t ret_ft = ft_strlcpy(dst2, tests[i].src, tests[i].size);
//		printf("Test %d:\n", i + 1);
//		print_result("strlcpy", dst1, ret_std, tests[i].size);
//		print_result("ft_strlcpy", dst2, ret_ft, tests[i].size);
//		printf("----\n");
//	}
//	return (0);
//}
