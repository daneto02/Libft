/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daneto <daneto@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 13:58:31 by daneto            #+#    #+#             */
/*   Updated: 2025/05/01 10:38:28 by daneto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] == s2[i] && s1[i] != '\0')
	{
		if (i < (n - 1))
			i++;
		else
			return (0);
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
/* 
int main(void)
{
	const char *s1 = "aklas";
	const char *s2 = "aklas";

	printf("test1: %d\n", ft_strncmp(s1, s2, 5));
	printf("%d\n", strncmp(s1, s2, 5));
	printf("%d\n", ft_strncmp("test\200", "test\0", 6));
} */
