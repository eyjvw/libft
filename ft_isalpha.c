/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbonneau <sbonneau@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 12:17:32 by sbonneau          #+#    #+#             */
/*   Updated: 2025/10/15 03:31:10 by sbonneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
//int	main(void)
//{
//	int	tests[] = {'a', 'Z', '5', '@', ' ', '\n', '0', '9', '!', 'b'};
//	int	n = sizeof(tests) / sizeof(tests[0]);
//	printf("%-7s | %-10s | %-10s\n", "Input", "ft_isalpha", "isalpha");
//	printf("-----------------------------------\n");
//	for (int i = 0; i < n; i++) {
//		printf("'%c' (%3d) | %-10d | %-10d\n",
//				tests[i], tests[i], ft_isalpha(tests[i]), isalpha(tests[i]));
//	}
//	return 0;
//}
