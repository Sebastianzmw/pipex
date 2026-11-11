/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhewong <zhewong@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 17:22:15 by zhewong           #+#    #+#             */
/*   Updated: 2024/06/06 19:18:27 by zhewong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*str;
	size_t			i;

	if (n == 0)
		return ;
	str = s;
	i = 0;
	while (i < n)
	{
		*str++ = 0;
		i++;
	}
}

/*int main()
{
	char	str[50] = "Hello world!";
	ft_bzero(str, 3);
	printf("result : %s\n", str);
	return (0);
}*/
