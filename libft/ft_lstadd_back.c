/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhewong <zhewong@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 20:24:51 by zhewong           #+#    #+#             */
/*   Updated: 2024/06/13 21:02:37 by zhewong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*add_new;

	if (!lst || !new)
		return ;
	add_new = *lst;
	if (!add_new)
		*lst = new;
	else
	{
		while (add_new->next)
			add_new = add_new->next;
		add_new->next = new;
	}
}
