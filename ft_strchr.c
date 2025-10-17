/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbonneau <sbonneau@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 15:06:27 by sbonneau          #+#    #+#             */
/*   Updated: 2025/10/15 04:22:20 by sbonneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			return ((char *)(s + i));
		i++;
	}
	if (s[i] == (char)c)
		return ((char *)(s + i));
	return (NULL);
}

//int main(void)
//{
//	struct {
//		const char *str;
//		int c;
//	} tests[] = {
//		{"abcde", 'a'},
//		{"abcde", 'c'},
//		{"abcde", 'e'},
//		{"abcde", 'x'},
//		{"abcde", '\0'},
//		{"", 'a'},
//		{"12345", '3'},
//		{"a b c", ' '},
//		{"a!b@c#d", '@'},
//		{"banana", 'a'}
//	};

//	int num_tests = sizeof(tests) / sizeof(tests[0]);
//	for (int i = 0; i < num_tests; i++) {
//		char *std_res = strchr(tests[i].str, tests[i].c);
//		char *ft_res = ft_strchr(tests[i].str, tests[i].c);
//		printf("Test %d: \"%s\", '%c' -> std: %s | ft: %s\n",
//			   i + 1, tests[i].str, tests[i].c,
//			   std_res ? std_res : "NULL",
//			   ft_res ? ft_res : "NULL");
//	}
//	return (0);
//}
