/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daneto <daneto@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 14:37:18 by daneto            #+#    #+#             */
/*   Updated: 2025/04/21 14:43:54 by daneto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}
/* 
#include <stdio.h>

int main()
{
	char c;

	c = '\n';
	printf("%d\n", ft_isprint(c));
	c = 'A';
	printf("%d\n", ft_isprint(c));
	c = '1';
	printf("%d\n", ft_isprint(c));
} */