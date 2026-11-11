/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhewong <zhewong@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 15:55:25 by zhewong           #+#    #+#             */
/*   Updated: 2024/06/06 19:22:23 by zhewong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>

char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0')
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if (c == '\0')
		return ((char *)s);
	return (0);
}

/* int main()
{
    const char i[] = "Hello, World!";
    char    find = 'z';

    char    *result = ft_strchr(i, find);
    if (result) 
    {
        printf("Character found: %s\n", result);
    } 
    else 
    {
        printf("Character not found.\n");
    }
    return (0);
} */
