/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbonneau <sbonneau@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 03:38:03 by sbonneau          #+#    #+#             */
/*   Updated: 2025/10/16 19:23:44 by sbonneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	total;
	void	*ptr;

	total = nmemb * size;
	ptr = (void *)malloc(total);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, total);
	return (ptr);
}

//int main(void)
//{
//	int	*arr;
//	int	n = 5;

//	arr = (int *)calloc(n, sizeof(int));
//	if (!arr)
//	{
//		printf("Allocation rate\n");
//		return (1);
//	}
//	for (int i = 0; i < n; i++)
//		printf("arr[%d] = %d\n", i, arr[i]);
//	free(arr);
//	return (0);
//}
