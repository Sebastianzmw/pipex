/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhewong <zhewong@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 15:58:48 by zhewong           #+#    #+#             */
/*   Updated: 2024/06/13 17:43:53 by zhewong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	x;
	size_t	y;
	size_t	i;

	y = 0;
	while (src[y] != '\0')
		y++;
	if (dst == NULL && dstsize == 0)
		return (y);
	x = 0;
	while (dst[x] != '\0')
		x++;
	if (dstsize == 0 || x >= dstsize)
		return (dstsize + y);
	i = 0;
	while (src[i] != '\0' && (x + i) < dstsize - 1)
	{
		dst[x + i] = src[i];
		i++;
	}
	dst[x + i] = '\0';
	return (x + y);
}

/* int main()
{
    char    dest[100] = "Hello ";
    char    src[] = "World!!!!";

    size_t n = 9;
    size_t length = ft_strlcat(dest, src, n);
    printf("result : %s\nlength : %zu\n", dest, length);
    return (0);
} */
