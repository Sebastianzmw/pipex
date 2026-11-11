/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhewong <zhewong@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 14:17:03 by zhewong           #+#    #+#             */
/*   Updated: 2024/06/13 12:33:59 by zhewong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	x;
	size_t	y;

	if (haystack == NULL && len == 0)
		return (NULL);
	if (*needle == '\0')
		return ((char *)haystack);
	x = 0;
	while (*haystack && x < len)
	{
		if (*haystack == *needle)
		{
			y = 0;
			while (needle[y] && haystack[y] == needle[y] && y < len - x)
				y++;
			if (needle[y] == '\0')
				return ((char *)haystack);
		}
		haystack++;
		x++;
	}
	return (NULL);
}
/*
int main()
{
	char	haystack[] = "aaabcabcd";
	char	needle[] = "cd";
	size_t	num = 8;

	char *result = ft_strnstr(haystack, needle, num);
	printf("own result : %s\n", result);
	return (0);
}*/
