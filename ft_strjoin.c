/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbonneau <sbonneau@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 18:11:25 by sbonneau          #+#    #+#             */
/*   Updated: 2025/10/15 21:00:45 by sbonneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_strcat(char *dst, const char *src)
{
	size_t	i;

	i = ft_strlen(dst);
	while (*src)
		dst[i++] = *src++;
	dst[i] = '\0';
}

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*str;

	str = (char *)malloc(sizeof(char) * ((ft_strlen(s1) + ft_strlen(s2)) + 1));
	if (!str)
		return (NULL);
	str[0] = '\0';
	ft_strcat(str, s1);
	ft_strcat(str, s2);
	return (str);
}

//int main(void)
//{
//	struct {
//		const char *s1;
//		const char *s2;
//	} tests[] = {
//		{"Hello", "World"},
//		{"", "abc"},
//		{"", ""},
//		{"   ", "abc"},
//		{"42!@#", "$$$"},
//		{"Ceci est une très longue chaîne de test", "fin"},
//		{"Line1\n", "Line2"},
//		{"abc\0def", "xyz"},
//		{"123", "456"}
//	};

//	int num_tests = sizeof(tests) / sizeof(tests[0]);
//	for (int i = 0; i < num_tests; i++) {
//		char *res = ft_strjoin(tests[i].s1, tests[i].s2);
//		printf("Test %d: \"%s\" + \"%s\" = \"%s\"\n",
//			   i + 1, tests[i].s1, tests[i].s2, res ? res : "NULL");
//		free(res);
//	}
//	return (0);
//}
