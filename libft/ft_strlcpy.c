/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhewong <zhewong@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 16:02:29 by zhewong           #+#    #+#             */
/*   Updated: 2024/06/13 12:01:43 by zhewong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	n;
	size_t	count_src;

	count_src = 0;
	while (src[count_src] != '\0')
		count_src++;
	if (dstsize != '\0')
	{
		n = 0;
		while (src[n] != '\0' && n < (dstsize - 1))
		{
			dst[n] = src[n];
			n++;
		}
		dst[n] = '\0';
	}
	return (count_src);
}

/*loop to loop the str into size - 1,*/
/* int    main(void)
{
    char src[] = "Hello,!";
    char dest[20];

    unsigned int result = ft_strlcpy(dest, src, sizeof(dest));
    printf("result : %s\n", dest);
    printf("result : %d\n", result);

    return (0);
} */
//    write(1, dest, sizeof(dest) - 1);
//    write(1, &result, sizeof(result));
