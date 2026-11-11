/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhewong <zhewong@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 11:10:30 by zhewong           #+#    #+#             */
/*   Updated: 2024/06/06 19:20:35 by zhewong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*str;
	unsigned char		x;
	size_t				i;

	x = (unsigned char)c;
	str = (const unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (str[i] == x)
			return ((void *)(str + i));
		i++;
	}
	return (NULL);
}

/* int main()
{
	const char	str[] = "This is a truman show";
	int c = 'a';
	const char *p;

	p = ft_memchr(str, c, 9);
	printf("String starting from %c is %s\n", c, p);
	return (0);
} */
