/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhewong <zhewong@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 18:28:02 by zhewong           #+#    #+#             */
/*   Updated: 2024/06/11 15:27:02 by zhewong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t	ft_size(int n)
{
	size_t	len;

	len = 0;
	if (n <= 0)
		len++;
	while (n != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*result;
	long	num;
	long	len;

	num = n;
	len = ft_size(num);
	result = malloc(sizeof(char) * (len + 1));
	if (!result)
		return (NULL);
	result[len] = '\0';
	if (num == 0)
		*result = '0';
	if (num < 0)
	{
		*result = '-';
		num = -num;
	}
	while (num > 0)
	{
		*(result + len - 1) = (num % 10) + '0';
		num /= 10;
		len--;
	}
	return (result);
}

/* int	main(void)
{
	int n = -0;
	char *dest = ft_itoa(n);

	printf("%s", dest);
	return (0);
} */
