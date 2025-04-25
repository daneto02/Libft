/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daneto <daneto@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 13:36:19 by daneto            #+#    #+#             */
/*   Updated: 2025/04/14 16:05:15 by daneto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
/* 
#include <stdio.h>

int main()
{
	char c;

	c = '+';
	printf("%d\n", ft_isalpha(c));
	c = 'o';
	printf("%d\n", ft_isalpha(c));
	c = 'O';
	printf("%d\n", ft_isalpha(c));
	c = '0';
	printf("%d\n", ft_isalpha(c));
} */