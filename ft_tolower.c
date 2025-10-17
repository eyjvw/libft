/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbonneau <sbonneau@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 14:55:16 by sbonneau          #+#    #+#             */
/*   Updated: 2025/10/15 04:44:17 by sbonneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
		c += 32;
	return (c);
}

//int main(void)
//{
	//int tests[] = {'A', 'Z', 'a', 'z', '0',
	//	'9', '@', '#', ' ', '\n', 'm', 128, -1};
//	int n = sizeof(tests) / sizeof(tests[0]);
//	printf("%-7s | %-10s | %-10s\n", "Input", "ft_tolower", "tolower");
//	printf("-----------------------------------\n");
//	for (int i = 0; i < n; i++) {
//		printf("'%c' (%3d) | %-10d | %-10d\n", tests[i],
//				tests[i], ft_tolower(tests[i]), tolower(tests[i]));
//	}
//	return (0);
//}
