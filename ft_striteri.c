/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daneto <daneto@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 17:49:00 by daneto            #+#    #+#             */
/*   Updated: 2025/05/01 10:08:57 by daneto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	if (!s || !f)
		return ;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
/* #include <stdio.h>

void ft_ctoupper(unsigned int i, char *c)
{
    if (*c >= 'a' && *c <= 'z')
        *c = *c - 32;
}

int main(void)
{
    char str[] = "hello42lisboa";
    ft_striteri(str, ft_ctoupper);
    printf("Modified: %s\n", str);
    return 0;
} */