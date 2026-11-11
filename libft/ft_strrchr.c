/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhewong <zhewong@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 16:37:14 by zhewong           #+#    #+#             */
/*   Updated: 2024/06/13 11:24:51 by zhewong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>

char	*ft_strrchr(const char *s, int c)
{
	const char	*last;

	last = 0;
	while (*s != '\0')
	{
		if (*s == (char)c)
			last = s;
		s++;
	}
	if (c == '\0')
		return ((char *)s);
	return ((char *)last);
}

/*
int main()
{
    char	*s = "\0";
	char    find = 'o';

    char    *result = ft_strrchr(s, find);
    if (result) 
    {
        printf("Character found: %s\n", result);
    } 
    else 
    {
        printf("Character not found.\n");
    }
    return (0);
}
*/
