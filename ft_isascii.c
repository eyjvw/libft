/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbonneau <sbonneau@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 15:02:47 by sbonneau          #+#    #+#             */
/*   Updated: 2025/10/15 03:33:43 by sbonneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}

//int main(void)
//{
//	int tests[] = {0, 10, 65, 127, 128, -1, 255, 'A', 'z'};
//	int n = sizeof(tests) / sizeof(tests[0]);
//	printf("%-7s | %-10s | %-10s\n", "Input", "ft_isascii", "isascii");
//	printf("-----------------------------------\n");
//	for (int i = 0; i < n; i++) {
//		printf("%3d      | %-10d | %-10d\n",
//				tests[i], ft_isascii(tests[i]), isascii(tests[i]));
//	}
//	return 0;
//}
