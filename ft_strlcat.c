/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daneto <daneto@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 11:33:53 by daneto            #+#    #+#             */
/*   Updated: 2025/04/22 14:56:28 by daneto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <string.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dstlen;
	size_t	srclen;
	size_t	i;
	size_t	j;

	srclen = ft_strlen(src);
	i = 0;
	if (!size)
		return (srclen);
	dstlen = ft_strlen(dst);
	j = dstlen;
	if (j >= size)
		return (size + srclen);
	while (src[i] && j + 1 < size)
	{
		dst[j] = src[i];
		j++;
		i++;
	}
	dst[j] = '\0';
	return (dstlen + srclen);
}
/* 
int main()
{
	char dest[50];
	size_t ret;
	
	printf("Test 1, Normal\n");
	strcpy(dest, "42 ");
	ret = ft_strlcat(NULL, "Lisboa", 0);
	printf("Return: %zu | Dest: %s\n", ret, dest);

	printf("Test 2: Dest is empty / small\n");
    char dest_empty[5] = "";
    ret = ft_strlcat(NULL, "42 Lisboa", sizeof(dest_empty));
    printf("Returned: %zu | Dest: %s\n", ret, dest_empty);

} */