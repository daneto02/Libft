/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daneto <daneto@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/20 12:54:03 by daneto            #+#    #+#             */
/*   Updated: 2025/05/01 10:43:09 by daneto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	unsigned char		*ptr1;
	unsigned char		*ptr2;

	i = 0;
	ptr1 = (unsigned char *)s1;
	ptr2 = (unsigned char *)s2;
	while (i < n)
	{
		if (ptr1[i] != ptr2[i])
		{
			return (ptr1[i] - ptr2[i]);
		}
		i++;
	}
	return (0);
}

/* int main()
{
	char str_memcmp1[] = "Hello World";
	char str_memcmp2[] = "Hello World";

	int res_mine = ft_memcmp(str_memcmp1, str_memcmp2, 10);
	int res_orig = memcmp(str_memcmp1, str_memcmp2, 10);

	printf("ft_memcmp: %d\n", res_mine);
	printf("memcmp: %d\n", res_orig);

	return 0;
} */