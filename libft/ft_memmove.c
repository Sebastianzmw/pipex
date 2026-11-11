/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhewong <zhewong@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 11:43:44 by zhewong           #+#    #+#             */
/*   Updated: 2024/06/06 19:21:53 by zhewong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	n;

	if (!dst && !src)
		return (0);
	n = 0;
	if (dst > src)
	{
		n = len;
		while (n > 0)
		{
			((unsigned char *)dst)[n - 1] = ((unsigned char *)src)[n - 1];
			n--;
		}
	}
	else
	{
		while (n < len)
		{
			((unsigned char *)dst)[n] = ((unsigned char *)src)[n];
			n++;
		}
	}
	return (dst);
}

/* int main()
{
	char	str[50] = "Hello world!";
	ft_memmove(str + 7, str + 2, 3);
	printf("result : %s\n", str);
	return (0);
} */
