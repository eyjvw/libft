/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbonneau <sbonneau@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 01:21:33 by sbonneau          #+#    #+#             */
/*   Updated: 2025/10/15 03:55:13 by sbonneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t					i;
	const unsigned char		*str1;
	const unsigned char		*str2;

	str1 = (const unsigned char *)s1;
	str2 = (const unsigned char *)s2;
	i = 0;
	if (n == 0)
		return (0);
	while (i < n)
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}

//int main(void)
//{
//	struct {
//		const char *s1;
//		const char *s2;
//		size_t n;
//	} tests[] = {
//		{"abcdef", "abcdef", 6},
//		{"abcdef", "abcdeg", 6},
//		{"abcdef", "abczef", 6},
//		{"abcdef", "abcfef", 6},
//		{"abcdef", "abcde", 5},
//		{"abc\0def", "abc\0xyz", 7},
//		{"", "", 1},
//		{"abcdef", "abcdef", 0},
//		{"123456", "123457", 6},
//		{"!@#$%^", "!@#$%^", 6},
//	};

//	int num_tests = sizeof(tests) / sizeof(tests[0]);
//	for (int i = 0; i < num_tests; i++) {
//		int std_res = memcmp(tests[i].s1, tests[i].s2, tests[i].n);
//		int ft_res = ft_memcmp(tests[i].s1, tests[i].s2, tests[i].n);
//		printf("Test %d: \"%s\" vs \"%s\", n=%zu -> std: %d, ft: %d\n",
//			   i + 1, tests[i].s1, tests[i].s2, tests[i].n, std_res, ft_res);
//	}
//	return (0);
//}
