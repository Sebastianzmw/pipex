/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhewong <zhewong@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 12:17:47 by zhewong           #+#    #+#             */
/*   Updated: 2024/06/13 14:25:03 by zhewong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*result;
	size_t	total_size;

	if (size != 0 && count > UINT_MAX / size)
		return (NULL);
	total_size = (count * size);
	result = malloc(total_size);
	if (result != 0)
		ft_bzero(result, total_size);
	return (result);
}
