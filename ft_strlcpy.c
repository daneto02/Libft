/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daneto <daneto@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 16:48:00 by daneto            #+#    #+#             */
/*   Updated: 2025/04/21 14:44:24 by daneto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <string.h>
#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size != 0)
	{
		while (src[i] != '\0' && i < (size - 1))
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (ft_strlen(src));
}

//#include <bsd/string.h>
/* 
int main()
{
	char dest[20];
	size_t ret;
	
	printf("Test 1, Normal\n");
	ret = ft_strlcpy(dest, "Hello World!", sizeof(dest));
	printf("Return: %zu | Dest : %s\n", ret, dest);

	printf("Test 2, SRC bigger than Dest\n");
	char small_dest[5];
	ret = ft_strlcpy(small_dest, "Hello World!", sizeof(small_dest));
	printf("Return: %zu | Dest : %s\n", ret, small_dest);

	printf("Test 3, src = 0\n");
	char dest_zero[10];
	ret = ft_strlcpy(dest_zero, "Should not copy", 0);
	printf("Return: %zu | Dest: %s\n", ret, dest_zero);

	printf("Test 4 , NUll\n");
	char dest_null[10];
	ret = strlcpy(NULL, "IDK", 5);
	printf("Return: %zu | Dest: %s\n", ret, dest_null);
	
} */