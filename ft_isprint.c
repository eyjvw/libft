/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbonneau <sbonneau@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 15:56:02 by sbonneau          #+#    #+#             */
/*   Updated: 2025/10/15 03:44:28 by sbonneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}

//int main(void)
//{
//	int tests[] = {32, 33, 48, 57,
//		65, 90,97, 122, 126,
//		127, 31, 'a', ' ', '\n'};
//	int n = sizeof(tests) / sizeof(tests[0]);
//	printf("%-7s | %-10s | %-10s\n", "Input", "ft_isprint", "isprint");
//	printf("-----------------------------------\n");
//	for (int i = 0; i < n; i++) {
//		printf("%3d      | %-10d | %-10d\n",
//				tests[i], ft_isprint(tests[i]), isprint(tests[i]));
//	}
//	return 0;
//}
