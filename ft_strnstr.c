/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbonneau <sbonneau@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 21:32:32 by sbonneau          #+#    #+#             */
/*   Updated: 2025/10/15 04:37:17 by sbonneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (*little == '\0')
		return ((char *)big);
	while (big[i] && i < len)
	{
		if (big[i] == little[0])
		{
			j = 0;
			while (little[j] && (i + j) < len && big[i + j] == little[j])
				j++;
			if (little[j] == '\0')
				return ((char *)&big[i]);
		}
		i++;
	}
	return (NULL);
}

//int main(void)
//{
//	struct {
//		const char *haystack;
//		const char *needle;
//		size_t n;
//	} tests[] = {
//		{"Hello world", "Hello", 11},
//		{"Hello world", "world", 11},
//		{"Hello world", "42", 11},
//		{"Hello world", "world", 5},
//		{"Hello world", "", 11},
//		{"", "abc", 3},
//		{"abcde", "e", 5},
//		{"banana", "an", 6},
//		{"42!@#abc", "@#", 8},
//		{"abcde", "a", 0}
//	};

//	int num_tests = sizeof(tests) / sizeof(tests[0]);
//	for (int i = 0; i < num_tests; i++) {
//		char *std_res = strnstr(tests[i].haystack,
//				tests[i].needle, tests[i].n);
//		char *ft_res = ft_strnstr(tests[i].haystack,
//				tests[i].needle, tests[i].n);
//		printf("Test %d: \"%s\" | \"%s\" | n=%zu -> std: %s | ft: %s\n",
//			   i + 1, tests[i].haystack, tests[i].needle, tests[i].n,
//			   std_res ? std_res : "NULL",
//			   ft_res ? ft_res : "NULL");
//	}
//	return (0);
//}
