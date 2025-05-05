/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daneto <daneto@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 18:21:31 by daneto            #+#    #+#             */
/*   Updated: 2025/05/05 10:43:58 by daneto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	if (fd < 0)
		return ;
	write(fd, &c, 1);
}
/* int main()
{
    ft_putchar_fd('H', 1);
    ft_putchar_fd('e',1);
    ft_putchar_fd('l',1);
    ft_putchar_fd('l',1);
    ft_putchar_fd('o',1);
    ft_putchar_fd('!',1);
    ft_putchar_fd('\n',0);
} */