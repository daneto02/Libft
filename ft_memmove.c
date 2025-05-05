/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daneto <daneto@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 17:04:50 by daneto            #+#    #+#             */
/*   Updated: 2025/05/05 11:26:47 by daneto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*dest_ptr;
	const unsigned char	*src_ptr;

	dest_ptr = (unsigned char *)dest;
	src_ptr = (const unsigned char *)src;
	if (src_ptr < dest_ptr)
	{
		dest_ptr += n;
		src_ptr += n;
		while (n > 0)
		{
			n--;
			*(--dest_ptr) = *(--src_ptr);
		}
	}
	else
	{
		i = -1;
		while (++i < n)
		{
			dest_ptr[i] = src_ptr[i];
		}
	}
	return (dest);
}
/* 
int main()
{
	char str1[] = "Hello";         
	char str2[] = "World";         
	char str3[] = "Hello";         
	char str4[] = "World";         

	size_t len = 5;

	printf("Antes:\n");
	printf("str1 (original): %s\n", str1);
	printf("str3 (original): %s\n", str3);
	//
	memmove(str1, str2, len);
	printf("\nApós memmove:\n");
	printf("str3 (modificada): %s\n", str1);
	
	ft_memmove(str3, str4, len);
	printf("\nApós ft_memmove:\n");
	printf("str1 (modificada): %s\n", str3);
	//

	return (0);
} */