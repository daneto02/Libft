/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daneto <daneto@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 14:34:25 by daneto            #+#    #+#             */
/*   Updated: 2025/04/21 12:34:06 by daneto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}
/* 
#include <stdio.h>

int main()
{
	char c;

	c = '\n';
	printf("%d\n", ft_isascii(c));
	c = 'o';
	printf("%d\n", ft_isascii(c));
	c = 'O';
	printf("%d\n", ft_isascii(c));
	c = '0';
	printf("%d\n", ft_isascii(c));
}  */