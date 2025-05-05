/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daneto <daneto@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 10:56:17 by daneto            #+#    #+#             */
/*   Updated: 2025/05/01 11:13:36 by daneto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0' && *s != (char)c)
		s++;
	if (*s == (char)c)
		return ((char *)s);
	return (0);
}
/* 
int main(void)
{
    const char *test1 = "hello wOrld";
    const char *test2 = "";

    // 1. Normal
    printf("Test 1: %s\n", ft_strchr(test1, 'o'));

    // 2. Char not in str
    printf("Test 2: %s\n", ft_strchr(test1, 'z'));

    // 3. Empty string
    printf("Test 3: %s\n", ft_strchr(test2, 'a'));

	// 4. More than one of the same char in the str
	printf("Test 4: %s\n", ft_strchr(test1, 'l'));
    return 0;
} */