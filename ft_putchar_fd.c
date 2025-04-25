/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daneto <daneto@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 18:21:31 by daneto            #+#    #+#             */
/*   Updated: 2025/04/25 18:26:32 by daneto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putchar_fd(char c, int fd)
{
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
    ft_putchar_fd('\n',1);
} */