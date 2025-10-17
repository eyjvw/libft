/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbonneau <sbonneau@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 12:05:06 by sbonneau          #+#    #+#             */
/*   Updated: 2025/10/15 04:29:03 by sbonneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	size;

	size = 0;
	while (s[size])
		size++;
	return (size);
}

//int main(void)
//{
//	const char *tests[] = {
//		"sbonneau",
//		"",
//		"   ",
//		"42!@#",
//		"Ceci est une très longue chaîne de test pour strlen.",
//		"Line1\nLine2",
//		"1234567890",
//		"abc\0def"
//	};

//	int num_tests = sizeof(tests) / sizeof(tests[0]);
//	for (int i = 0; i < num_tests; i++) {
//		printf("Test %d: \"%s\"\n", i + 1, tests[i]);
//		printf("  ft_strlen : %zu\n", ft_strlen(tests[i]));
//		printf("  strlen    : %zu\n", strlen(tests[i]));
//		printf("----\n");
//	}
//	return (0);
//}
