/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbonneau <sbonneau@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 19:11:01 by sbonneau          #+#    #+#             */
/*   Updated: 2025/10/15 21:27:44 by sbonneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	x(char *dst, const char *src, unsigned int start, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len && src[start + i])
	{
		dst[i] = src[start + i];
		i++;
	}
	dst[i] = '\0';
}

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	size_t	s_len;
	char	*str;

	s_len = ft_strlen(s);
	if (start >= s_len)
	{
		str = (char *)malloc(sizeof(char));
		if (!str)
			return (NULL);
		str[0] = '\0';
		return (str);
	}
	if (len > s_len - start)
		len = s_len - start;
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	x(str, s, start, len);
	return (str);
}

//int main(void)
//{
//	struct {
//		const char *s;
//		unsigned int start;
//		size_t len;
//	} tests[] = {
//		{"Hello World", 0, 5},
//		{"Hello World", 6, 5},
//		{"Hello World", 10, 1},
//		{"Hello World", 6, 10},
//		{"Hello", 5, 3},
//		{"Hello", 10, 3},
//		{"Hello", 2, 0},
//		{"Hello", 0, 5},
//		{"", 0, 3},
//		{"Hello", 0, 0}
//	};

//	int num_tests = sizeof(tests) / sizeof(tests[0]);
//	for (int i = 0; i < num_tests; i++) {
//		char *res = ft_substr(tests[i].s, tests[i].start, tests[i].len);
//		printf("Test %d: \"%s\" | start: %u | len: %zu -> \"%s\"\n",
//			   i + 1, tests[i].s, tests[i].start,
//			   	tests[i].len, res ? res : "NULL");
//		free(res);
//	}
//	return (0);
//}
