/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daneto <daneto@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 11:50:21 by daneto            #+#    #+#             */
/*   Updated: 2025/04/21 18:15:37 by daneto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*last_char;
	int		i;

	last_char = NULL;
	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			last_char = (char *)(s + i);
		i++;
	}
	if ((char)c == '\0')
		return ((char *)(s + i));
	return (last_char);
}
/* 
int main(void)
{
    const char *test1 = "hello";
    // Test 1: Normal case
    printf("Test 1: %s\n", ft_strrchr(test1, 'o'));  // "orld"
	const char *test2 = "abcdef";
    // Test 2: Char not in the str
    printf("Test 2: %s\n", ft_strrchr(test2, 'z'));  // (null)
	const char *test3 = "abcabcabc";
    // Test 3: Repeated pattern
    printf("Test 3: %s\n", ft_strrchr(test3, 'b'));  // "bc"
	const char *test4 = "sameletters";
    // Test 4: Find first/last letter
    printf("Test 4: %s\n", ft_strrchr(test4, 's'));  // "s"
	// Test 6: Find null terminator
	char *res = ft_strrchr(test1, '\0');
	if (res != NULL)
		printf("Test 6: Found null terminator at position: %ld\n", res - test1);
	else
		printf("Test 6: Null terminator not found\n");
    return 0;
} */