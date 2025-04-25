/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daneto <daneto@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 11:49:51 by daneto            #+#    #+#             */
/*   Updated: 2025/04/14 16:24:40 by daneto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	size_t	i;
	char	*p;

	i = 0;
	p = str;
	while (i < n)
	{
		p[i] = c;
		i++;
	}
	return (p);
}
/* 
int main()
{
	char str[20] = "42 Lisboa...";

	ft_memset(str, '@', 4);
	printf("Result: %s\n", str);
} */
//str, c, n, 
//str = pointer to the block of memory to fill
//c = what is used to fill the block of memory
//n = number of bytes to set to the value
