/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daneto <daneto@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 14:20:22 by daneto            #+#    #+#             */
/*   Updated: 2025/05/05 13:58:29 by daneto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char const *s, char sep)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] && s[i] == sep)
			i++;
		if (s[i] && s[i] != sep)
			count++;
		while (s[i] && s[i] != sep)
			i++;
	}
	return (count);
}

static char	*malloc_words(char const **s, char sep)
{
	int			len;
	char		*buffer;
	const char	*str;

	len = 0;
	while (**s && **s == sep)
		(*s)++;
	str = *s;
	while (**s && **s != sep)
	{
		len++;
		(*s)++;
	}
	buffer = malloc(sizeof(char) * (len + 1));
	if (!buffer)
		return (NULL);
	ft_strlcpy(buffer, str, len + 1);
	return (buffer);
}

static void	free_split(char **arr, int current)
{
	while (current >= 0)
		free(arr[current--]);
	free(arr);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		words;
	char	**str;

	if (!s)
		return (NULL);
	words = count_words(s, c);
	str = malloc(sizeof(char *) * (words + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (i < words)
	{
		str[i] = malloc_words(&s, c);
		if (!str[i])
			return (free_split(str, i - 1), NULL);
		i++;
	}
	str[i] = NULL;
	return (str);
}
/* 
int main()
{
	char **words = ft_split(" hello world ola mundo", ' ');
	int i = 0;
	
	if(!words)
		return(1);
	while(words[i])
	{
		printf("%s\n", words[i]);
		free(words[i]);
		i++;
	}
	free(words);
} */
