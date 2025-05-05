/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daneto <daneto@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 11:33:53 by daneto            #+#    #+#             */
/*   Updated: 2025/05/01 10:59:35 by daneto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	
	printf("Test 1, Normal\n");
	strcpy(dest, "42 ");
	ft_strlcat(dest, "Lisboa", 7);
	printf("%s\n", dest);
} */