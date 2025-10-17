/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbonneau <sbonneau@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 02:05:18 by sbonneau          #+#    #+#             */
/*   Updated: 2025/10/15 04:22:16 by sbonneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		i;
	char	*dup;

	i = 0;
	dup = (char *)malloc(sizeof(char) * ft_strlen(s) + 1);
	if (!dup)
		return (NULL);
	while (s[i])
	{
		dup[i] = s[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

//int main(void)
//{
//	const char *tests[] = {
//		"Hello",
//		"",
//		"   ",
//		"42!@#",
//		"Ceci est une très longue chaîne de test",
//		"Line1\nLine2",
//		"abc\0def",
//		"1234567890"
//	};

//	int num_tests = sizeof(tests) / sizeof(tests[0]);
//	for (int i = 0; i < num_tests; i++) {
//		char *std_res = strdup(tests[i]);
//		char *ft_res = ft_strdup(tests[i]);
//		printf("Test %d: \"%s\"\n", i + 1, tests[i]);
//		printf("  strdup   : \"%s\"\n", std_res);
//		printf("  ft_strdup: \"%s\"\n", ft_res);
//		free(std_res);
//		free(ft_res);
//		printf("----\n");
//	}
//	return (0);
//}
