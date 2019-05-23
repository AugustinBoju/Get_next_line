/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstappend.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auguboju <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/09 13:39:54 by auguboju          #+#    #+#             */
/*   Updated: 2019/01/09 13:39:57 by auguboju         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			ft_lstappend(t_list *list, t_list *new)
{
	t_list		*cur;

	if (list && new)
	{
		cur = list;
		while (cur->next != NULL)
			cur = cur->next;
		cur->next = new;
		new->next = NULL;
	}
}
