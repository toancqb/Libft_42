/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_queue_push.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qtran <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/02 23:11:07 by qtran             #+#    #+#             */
/*   Updated: 2018/07/02 23:15:56 by qtran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_queue_push(t_list **st, t_list *new_elem)
{
	t_list *tmp;

	if (st)
	{
		tmp = *st;
		if (!tmp)
			*st = new_elem;
		else
		{
			new_elem->next = *st;
			*st = new_elem;
		}
	}
}
