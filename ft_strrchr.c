/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbonneau <sbonneau@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 02:57:24 by sbonneau          #+#    #+#             */
/*   Updated: 2025/10/15 04:39:07 by sbonneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i--;
	}
	return (NULL);
}

//int main(void)
//{
//	struct {
//		const char *str;
//		int c;
//	} tests[] = {
//		{"abcde", 'a'},
//		{"abcabc", 'b'},
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
//		char *std_res = strrchr(tests[i].str, tests[i].c);
//		char *ft_res = ft_strrchr(tests[i].str, tests[i].c);
//		printf("Test %d: \"%s\", '%c' -> std: %s | ft: %s\n",
//			   i + 1, tests[i].str, tests[i].c,
//			   std_res ? std_res : "NULL",
//			   ft_res ? ft_res : "NULL");
//	}
//	return (0);
//}
