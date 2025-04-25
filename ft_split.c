/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daneto <daneto@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 14:20:22 by daneto            #+#    #+#             */
/*   Updated: 2025/04/23 15:50:59 by daneto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int count_words(char const *s, char sep)
{
	int i;
	int count;
	
	i = 0;
	count = 0;
	while(s[i])
	{
		while(s[i] && s[i] == sep)
			i++;
		if(s[i] && s[i] != sep)
			count++;
		while(s[i] && s[i] != sep)
			i++;
	}
	return(count);
}

static char *malloc_words(char const **s, char sep)
{
	int 		len;
	char 		*buffer;
	const char 	*str;

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
	if(!buffer)
		return(NULL);
	ft_strlcpy(buffer, str, len + 1);
	return(buffer);
}

static void free_split(char **arr, int current)
{
	while(current >= 0)
		free(arr[current--]);
	free(arr);
}

char **ft_split(char const *s, char c)
{
	int		i;
	int		words;
	char	**str;
	
	if (!s)
		return (NULL);
	words = count_words(s, c);
	str = malloc(sizeof(char *) * (words + 1));
	if(!str)
		return(NULL);
	i = 0;
	while(i < words)
	{
		str[i] = malloc_words(&s, c);
		if(!str[i])
			return(free_split(str, i - 1), NULL);
		i++;
	}
	str[i] = NULL;
	return(str);
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
		printf("Word %d : %s\n", i, words[i]);
		free(words[i]);
		i++;
	}
	free(words);
} */
/* 
int main()
{
	printf("\n\n    |---- SPLIT ----|\n\n");

	int    i;
	char    split1[] = "This will be splitted";
	char    split2[] = "This.should.not.be.splitted";
	char    *empty = "";
	char    **av;

	i = -1;
	av = ft_split(split1, ' ');
	if (av)
	{
		while (av[++i])
		{
			printf("%s\n", av[i]);
			free(av[i]);
		}
	}
	else
		printf("%p\n", av);
	free(av);
	printf("\n");
	i = -1;
	av = ft_split(split2, ' ');
	if (av)
	{
		while (av[++i])
		{
			printf("%s\n", av[i]);
			free(av[i]);
		}
	}
	else
		printf("%p\n", av);
	free(av);
	printf("\n");
	i = -1;
	av = ft_split(empty, ' ');
	if (av)
	{
		while (av[++i])
		{
			printf("%s\n", av[i]);
			free(av[i]);
		}
	}
	else
		printf("%p\n", av);
	free(av);
	i = -1;
	av = ft_split(NULL, ' ');
	if (av)
	{
		while (av[++i])
		{
			printf("%s\n", av[i]);
			free(av[i]);
		}
	}
	else
		printf("%p\n", av);
	free(av);
} */
/* 
#include "libft.h"
#include <stdlib.h>
#include <stddef.h>

static int	word_count(const char *s, char c)
{
	int count = 0;

	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s && *s != c)
		{
			count++;
			while (*s && *s != c)
				s++;
		}
	}
	return count;
}

static char	*word_dup(const char *start, int len)
{
	char *word = malloc(len + 1);
	if (!word)
		return NULL;

	for (int i = 0; i < len; i++)
		word[i] = start[i];
	word[len] = '\0';
	return word;
}

char	**ft_split(const char *s, char c)
{
	char	**res;
	int		i = 0;
	int		len;

	if (!s)
		return NULL;

	res = malloc(sizeof(char *) * (word_count(s, c) + 1));
	if (!res)
		return NULL;

	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s && *s != c)
		{
			const char *start = s;
			len = 0;
			while (*s && *s != c)
			{
				len++;
				s++;
			}
			res[i] = word_dup(start, len);
			if (!res[i])
			{
				while (i > 0)
					free(res[--i]);
				free(res);
				return NULL;
			}
			i++;
		}
	}
	res[i] = NULL;
	return res;
} */
