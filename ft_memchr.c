/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbonneau <sbonneau@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 17:45:09 by sbonneau          #+#    #+#             */
/*   Updated: 2025/10/15 05:50:57 by sbonneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;

	str = (unsigned char *)s;
	while (n--)
	{
		if (*str == (unsigned char)c)
			return (str);
		str++;
	}
	return (NULL);
}

//int main(void)
//{
//	struct {
//		const char *str;
//		int c;
//		size_t n;
//	} tests[] = {
//		{"abcdef", 'a', 6},
//		{"abcdef", 'd', 6},
//		{"abcdef", 'f', 6},
//		{"abcdef", 'x', 6},
//		{"abc\0def", '\0', 7},
//		{"", 'a', 1},
//		{"abcdef", 'a', 0},
//		{"123456789", '5', 9},
//		{"ab!@#cd", '@', 7},
//	};

//	int num_tests = sizeof(tests) / sizeof(tests[0]);
//	for (int i = 0; i < num_tests; i++) {
//		void *std_res = memchr(tests[i].str, tests[i].c, tests[i].n);
//		void *ft_res = ft_memchr(tests[i].str, tests[i].c, tests[i].n);
//		printf("Test %d: \"%s\", '%c', %zu -> std: %p, ft: %p\n",
//			   i + 1, tests[i].str, tests[i].c, tests[i].n, std_res, ft_res);
//	}
//	return 0;
//}
