/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbonneau <sbonneau@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 02:11:44 by sbonneau          #+#    #+#             */
/*   Updated: 2025/10/15 04:33:34 by sbonneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*result;

	i = 0;
	result = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!result)
		return (NULL);
	result[i] = '\0';
	while (*s)
	{
		result[i] = f(i, *s);
		i++;
		s++;
	}
	result[i] = '\0';
	return (result);
}

//char to_upper(unsigned int i, char c)
//{
//	(void)i;
//	if (c >= 'a' && c <= 'z')
//		return c - 32;
//	return c;
//}

//int main(void)
//{
//	const char *tests[] = {
//		"Hello",
//		"",
//		"a b c",
//		"42!@#",
//		"Ceci est une très longue chaîne de test",
//		"Line1\nLine2",
//		"1234567890"
//	};

//	int num_tests = sizeof(tests) / sizeof(tests[0]);
//	for (int i = 0; i < num_tests; i++) {
//		char *res = ft_strmapi(tests[i], to_upper);
//		printf("Test %d: \"%s\" -> \"%s\"\n", i + 1,
//				tests[i], res ? res : "NULL");
//		free(res);
//	}
//	return (0);
//}
