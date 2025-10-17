/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbonneau <sbonneau@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 21:58:43 by sbonneau          #+#    #+#             */
/*   Updated: 2025/10/15 22:22:21 by sbonneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(const char *s, char c)
{
	int	count;
	int	in_word;

	count = 0;
	in_word = 0;
	while (*s)
	{
		if (*s != c && in_word == 0)
		{
			in_word = 1;
			count++;
		}
		else if (*s == c)
			in_word = 0;
		s++;
	}
	return (count);
}

static char	*malloc_word(const char *s, char c)
{
	int		len;
	int		i;
	char	*word;

	len = 0;
	i = 0;
	while (s[len] && s[len] != c)
		len++;
	word = (char *)malloc(len + 1);
	if (!word)
		return (NULL);
	while (i < len)
	{
		word[i] = s[i];
		i++;
	}
	word[len] = '\0';
	return (word);
}

static void	free_split(char **result, int i)
{
	while (i--)
		free(result[i]);
	free(result);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	char	**result;

	i = 0;
	result = (char **)malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!result)
		return (NULL);
	while (*s)
	{
		if (*s != c)
		{
			result[i] = malloc_word(s, c);
			if (!result[i])
				return (free_split(result, i), NULL);
			i++;
			while (*s && *s != c)
				s++;
		}
		else
			s++;
	}
	result[i] = NULL;
	return (result);
}

//void print_split(char **tab)
//{
//	int i = 0;
//	while (tab && tab[i])
//	{
//		printf("'%s'\n", tab[i]);
//		i++;
//	}
//}

//int main(void)
//{
//	char *tests[][2] = {
//		{"Hello world", " "},
//		{"", ","},
//		{"abc", ","},
//		{"a,,b,c", ","},
//		{",abc,def,", ","},
//		{",,,", ","},
//		{"   a  b   c  ", " "},
//		{"a:b:c:d", ":"},
//		{"a!b@c#d", "@"},
//		{"abc,", ","}
//	};

//	int num_tests = sizeof(tests) / sizeof(tests[0]);
//	for (int i = 0; i < num_tests; i++)
//	{
//		printf("Test %d : \"%s\" avec '%s'\n", i + 1, tests[i][0], tests[i][1]);
//		char **result = ft_split(tests[i][0], tests[i][1][0]);
//		print_split(result);
//		if (result)
//		{
//			int j = 0;
//			while (result[j])
//				free(result[j++]);
//			free(result);
//		}
//		printf("----\n");
//	}
//	return (0);
//}
