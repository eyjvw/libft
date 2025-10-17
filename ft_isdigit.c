/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbonneau <sbonneau@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 12:22:23 by sbonneau          #+#    #+#             */
/*   Updated: 2025/10/15 03:42:54 by sbonneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

//int main(void)
//{
//	int tests[] = {'0', '5', '9', 'a', ' ', -1, 48, 57, 58, 47};
//	int n = sizeof(tests) / sizeof(tests[0]);
//	printf("%-7s | %-10s | %-10s\n", "Input", "ft_isdigit", "isdigit");
//	printf("-----------------------------------\n");
//	for (int i = 0; i < n; i++) {
//		printf("'%c' (%3d) | %-10d | %-10d\n", tests[i],
//				tests[i], ft_isdigit(tests[i]), isdigit(tests[i]));
//	}
//	return 0;
//}
