/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbonneau <sbonneau@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 19:53:38 by sbonneau          #+#    #+#             */
/*   Updated: 2025/10/15 04:34:09 by sbonneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] && s1[i] == s2[i] && i < n - 1)
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

//int main(void)
//{
//	struct {
//		const char *s1;
//		const char *s2;
//		size_t n;
//	} tests[] = {
//		{"abc", "abc", 3},
//		{"abc", "abd", 3},
//		{"abcde", "abfde", 2},
//		{"", "abc", 3},
//		{"", "", 1},
//		{"abc", "abc", 0},
//		{"ab", "ab", 5},
//		{"42!@#", "42!@#", 5},
//		{"Line1\n", "Line1\n", 6},
//		{"abc", "xbc", 3}
//	};

//	int num_tests = sizeof(tests) / sizeof(tests[0]);
//	for (int i = 0; i < num_tests; i++) {
//		int std_res = strncmp(tests[i].s1, tests[i].s2, tests[i].n);
//		int ft_res = ft_strncmp(tests[i].s1, tests[i].s2, tests[i].n);
//		printf("Test %d: \"%s\" vs \"%s\", n=%zu -> std: %d | ft: %d\n",
//			   i + 1, tests[i].s1, tests[i].s2, tests[i].n, std_res, ft_res);
//	}
//	return (0);
//}
