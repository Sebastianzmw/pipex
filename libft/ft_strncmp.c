/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhewong <zhewong@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 16:09:16 by zhewong           #+#    #+#             */
/*   Updated: 2024/06/13 10:58:17 by zhewong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	c;

	c = 0;
	while (c < n && (s1[c] != '\0' && s2[c] != '\0') && (s1[c] == s2[c]))
	{
		c++;
	}
	if (c == n)
		return (0);
	else
	{
		return ((unsigned char)s1[c] - (unsigned char)s2[c]);
	}
}

/* int main(void)
{
    char s1[] = "test\200";
    char s2[] = "test\0";

    printf("result : %d\n", ft_strncmp(s1, s2, 6));
	printf("new result : %d\n", strncmp(s1, s2, 6));
    if (ft_strncmp(s1, s2, 6) == 0)
    {
        printf("same");
    }
    else{
        printf("diff");
    } 
	return (0);
}*/
