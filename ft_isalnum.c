/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daneto <daneto@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 14:14:01 by daneto            #+#    #+#             */
/*   Updated: 2025/04/14 16:07:44 by daneto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	return ((c >= 48 && c <= 57)
		|| (c >= 65 && c <= 90) || (c >= 97 && c <= 122));
}
/* 
#include <stdio.h>

int main()
{
	char c;

	c = '+';
	printf("%d\n", ft_isalnum(c));
	c = 'o';
	printf("%d\n", ft_isalnum(c));
	c = 'O';
	printf("%d\n", ft_isalnum(c));
	c = '0';
	printf("%d\n", ft_isalnum(c));
}  */