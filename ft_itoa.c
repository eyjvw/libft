/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbonneau <sbonneau@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 00:09:45 by sbonneau          #+#    #+#             */
/*   Updated: 2025/10/15 03:46:04 by sbonneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_intlen(int n)
{
	int	len;

	len = (n <= 0);
	while (n)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;
	long	nb;

	nb = n;
	len = ft_intlen(n);
	str = (char *)malloc(len + 1);
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (nb == 0)
		str[0] = '0';
	if (nb < 0)
	{
		str[0] = '-';
		nb = -nb;
	}
	while (nb > 0)
	{
		str[--len] = (nb % 10) + '0';
		nb /= 10;
	}
	return (str);
}

//int main(void)
//{
//	int tests[] = {0, 42, -42, 2147483647,
//		-2147483648, 100, -100};
//	int n = sizeof(tests) / sizeof(tests[0]);
//	char buffer[20];

//	printf("%-12s | %-12s | %-12s\n", "Input", "ft_itoa", "sprintf");
//	printf("---------------------------------------------\n");
//	for (int i = 0; i < n; i++) {
//		printf("%-12d | %-12s | ",
//				tests[i], ft_itoa(tests[i]));
//		sprintf(buffer, "%d", tests[i]);
//		printf("%-12s\n", buffer);
//	}
//	return 0;
//}
