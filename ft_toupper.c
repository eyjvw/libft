/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbonneau <sbonneau@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 13:49:00 by sbonneau          #+#    #+#             */
/*   Updated: 2025/10/15 04:44:03 by sbonneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if ((c >= 'a') && (c <= 'z'))
		c -= 32;
	return (c);
}

//int main(void)
//{
	//int tests[] = {'a', 'z', 'A', 'Z',
	//	'0', '9', '@', '#', ' ', '\n', 'M', 128, -1};
//	int n = sizeof(tests) / sizeof(tests[0]);
//	printf("%-7s | %-10s | %-10s\n", "Input", "ft_toupper", "toupper");
//	printf("-----------------------------------\n");
//	for (int i = 0; i < n; i++) {
//		printf("'%c' (%3d) | %-10d | %-10d\n", tests[i],
//				tests[i], ft_toupper(tests[i]), toupper(tests[i]));
//	}
//	return 0;
//}
