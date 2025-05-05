/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daneto <daneto@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/20 12:52:51 by daneto            #+#    #+#             */
/*   Updated: 2025/05/01 09:33:41 by daneto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	result;
	int	sign;
	int	i;

	i = 0;
	result = 0;
	sign = 1;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (result * sign);
}

/* int main()
{
	char atoi_number1[] = "	-4839281 wds";
	char atoi_number2[] = " +4839wds281";

	printf("ft_atoi: %d\n", ft_atoi(atoi_number1));
	printf("original: %d\n\n", atoi(atoi_number1));

	printf("ft_atoi: %d\n", ft_atoi(atoi_number2));
	printf("original: %d\n\n", atoi(atoi_number2));

	return (0);
} */
