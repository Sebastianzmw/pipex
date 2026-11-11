/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhewong <zhewong@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 17:06:41 by zhewong           #+#    #+#             */
/*   Updated: 2024/06/13 14:08:37 by zhewong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	c;
	long	x;

	x = n;
	if (x < 0)
	{
		x = x * -1;
		write(fd, "-", 1);
	}
	if (x >= 10)
	{
		ft_putnbr_fd(x / 10, fd);
	}
	c = x % 10 + '0';
	write(fd, &c, 1);
}

/* int main()
{
	ft_putnbr_fd(-234, 1);
	return (0);
} */
