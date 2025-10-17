/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbonneau <sbonneau@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 00:29:38 by sbonneau          #+#    #+#             */
/*   Updated: 2025/10/15 04:22:36 by sbonneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

//void to_upper(unsigned int i, char *c)
//{
//	(void)i;
//	if (*c >= 'a' && *c <= 'z')
//		*c = *c - 32;
//}

//int main(void)
//{
//	char test1[] = "Hello";
//	char test2[] = "";
//	char test3[] = "a b c";
//	char test4[] = "42!@#";
//	char test5[] = "Ceci est une très longue chaîne de test pour striteri.";
//	char test6[] = "Line1\nLine2";
//	char test7[] = "1234567890";

//	char *tests[] = {test1, test2, test3, test4, test5, test6, test7};
//	int num_tests = sizeof(tests) / sizeof(tests[0]);

//	for (int i = 0; i < num_tests; i++) {
//		printf("Avant : \"%s\"\n", tests[i]);
//		ft_striteri(tests[i], to_upper);
//		printf("Après : \"%s\"\n", tests[i]);
//		printf("----\n");
//	}
//	return (0);
//}
