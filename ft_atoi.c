/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbonneau <sbonneau@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 15:59:10 by sbonneau          #+#    #+#             */
/*   Updated: 2025/10/15 23:00:32 by sbonneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	i;
	int	sign;
	int	num;

	i = 0;
	sign = 1;
	num = 0;
	while ((nptr[i] > 8 && nptr[i] < 14) || (nptr[i] == 32))
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			sign = -sign;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		num = (num * 10) + (nptr[i] - '0');
		i++;
	}
	return (sign * num);
}

//int	main(void)
//{
//	char	*tests[] = {
//		"42",
//		"-42",
//		"0",
//		"2147483647",
//		"-2147483648",
//		"abc",
//		"  123abc",
//		"\t\n  -56",
//		"",
//		"  +00123",
//		NULL
//	};
//	int	i = 0;

//	printf("%-15s | %-10s | %-10s\n", "Input", "ft_atoi", "atoi");
//	printf("------------------------------------------\n");
//	while (tests[i++])
//	{
//		printf("%-15s | %-10d | %-10d\n", tests[i],
//				ft_atoi(tests[i]), atoi(tests[i]));
//		i++;
//	}
//	return 0;
//}
