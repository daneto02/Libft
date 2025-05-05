/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daneto <daneto@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 15:44:00 by daneto            #+#    #+#             */
/*   Updated: 2025/05/05 10:49:01 by daneto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	num_len(long num)
{
	int	len;

	len = 0;
	if (num == 0)
		return (1);
	if (num < 0)
	{
		num = -num;
		len++;
	}
	while (num > 0)
	{
		num = num / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int		len;
	long	nbr;
	char	*number;

	nbr = n;
	len = num_len(nbr);
	number = malloc(sizeof(char) * (len + 1));
	if (!number)
		return (NULL);
	number[len--] = '\0';
	if (nbr == 0)
		number[0] = '0';
	if (nbr < 0)
	{
		number[0] = '-';
		nbr = -nbr;
	}
	while (len >= 0 && nbr > 0)
	{
		number[len--] = (nbr % 10) + '0';
		nbr = nbr / 10;
	}
	return (number);
}
/* #include <stdio.h>
#include <limits.h>

int main()
{
    printf("\n\n	|---- ITOA ----|\n\n");

	    char *iitoa = ft_itoa(INT_MAX);
	    printf("diff: %d\n", strcmp(iitoa, "2147483647"));
	    free(iitoa);
	    iitoa = ft_itoa(INT_MIN);
	    printf("diff: %d\n", strcmp(iitoa, "-2147483648"));
	    free(iitoa);
	    iitoa = ft_itoa(0);
	    printf("diff: %d\n", strcmp(iitoa, "0"));
	    free(iitoa);
	    iitoa = ft_itoa(1);
	    printf("diff: %d\n", strcmp(iitoa, "1"));
	    free(iitoa);
	    iitoa = ft_itoa(-1);
	    printf("diff: %d\n", strcmp(iitoa, "-1"));
	    free(iitoa);
} */