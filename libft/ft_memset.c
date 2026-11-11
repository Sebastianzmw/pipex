/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhewong <zhewong@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 15:03:09 by zhewong           #+#    #+#             */
/*   Updated: 2024/06/06 19:22:08 by zhewong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>

void	*ft_memset(void *str, int c, size_t len)
{
	unsigned char	*s;
	size_t			i;

	s = str;
	i = 0;
	while (i < len)
	{
		*s++ = (unsigned char)c;
		i++;
	}
	return (str);
}

/*int	main()
{
	char str[50] = "Hello, 42 peasants!";
	printf("Before: %s\n", str);

	ft_memset(str, '$', 4);
	printf("After: %s\n", str);
	return (0);
}*/
