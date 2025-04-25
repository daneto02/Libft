/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daneto <daneto@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 13:59:59 by daneto            #+#    #+#             */
/*   Updated: 2025/04/14 16:05:18 by daneto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}
/* 
#include <stdio.h>

int main()
{
	char c;

	c = '+';
	printf("%d\n", ft_isdigit(c));
	c = 'A';
	printf("%d\n", ft_isdigit(c));
	c = '1';
	printf("%d\n", ft_isdigit(c));
} */