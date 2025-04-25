/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daneto <daneto@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 18:36:16 by daneto            #+#    #+#             */
/*   Updated: 2025/04/25 18:47:35 by daneto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
} */

void ft_putnbr_fd(int n, int fd)
{
    long num;

    num = (long)n;
    if(fd < 0)
        return;
    if(num < 0)
    {
        write(fd, "-", 1);
        num = -num;
    }
    if(num >= 10)
    {
        ft_putnbr_fd(num / 10, fd);
        ft_putnbr_fd(num % 10, fd);
    }
    else
        ft_putchar_fd(num + '0', fd);
}
/* int main()
{
    ft_putnbr_fd(-56789, 1);
    printf("\n");
    ft_putnbr_fd(1234, 1);
    printf("\n");
    ft_putnbr_fd(0, 1);
    printf("\n");
    ft_putnbr_fd(-2147483648, 1);
    printf("\n");
    ft_putnbr_fd(2147483647, 1);
    printf("\n");
} */