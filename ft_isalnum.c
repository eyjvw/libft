/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbonneau <sbonneau@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 14:56:25 by sbonneau          #+#    #+#             */
/*   Updated: 2025/10/15 03:30:05 by sbonneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}

//int	main(void)
//{
//	int	tests[] = {'a', 'Z', '5', '@', ' ', '\n', '0', '9', '!', 'b'};
//	int	n = sizeof(tests) / sizeof(tests[0]);
//	printf("%-7s | %-10s | %-10s\n", "Input", "ft_isalnum", "isalnum");
//	printf("-----------------------------------\n");
//	for (int i = 0; i < n; i++) {
//		printf("'%c' (%3d) | %-10d | %-10d\n",
//				tests[i], tests[i], ft_isalnum(tests[i]), isalnum(tests[i]));
//	}
//	return 0;
//}
