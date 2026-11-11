/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhewong <zhewong@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 15:48:41 by zhewong           #+#    #+#             */
/*   Updated: 2024/06/10 15:05:54 by zhewong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>

char	*ft_strcpy(char *dst, const char *src);

char	*ft_strdup(const char *s1)
{
	char	*dest;
	size_t	len;
	char	*str;

	str = (char *)s1;
	len = ft_strlen(str) + 1;
	dest = malloc(len * sizeof(char));
	if (dest == NULL)
		return (NULL);
	ft_strcpy(dest, s1);
	return (dest);
}

char	*ft_strcpy(char *dst, const char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

/*int	main()
{
	char	*str1 = "hello world";
	char	*str2 = ft_strdup(str1);
	printf("result : %s\n", str2);
	return (0);
}*/
