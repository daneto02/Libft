/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daneto <daneto@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 12:50:20 by daneto            #+#    #+#             */
/*   Updated: 2025/04/14 16:25:00 by daneto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*str;

	i = 0;
	str = s;
	while (i < n)
	{
		str[i] = 0;
		i++;
	}
}

/* #include <string.h>

void ft_bzero(void *s, size_t n)
{
	memset(s, 0, n);
} */
/* 
int main()
{
	char str[20] = "42 Lisboaaaa...";
	bzero(str + 6, 1);
	printf("Result: %s\n", str);
	return(0);
} */
