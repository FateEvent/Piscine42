/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faventur <faventur@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 16:50:17 by faventur          #+#    #+#             */
/*   Updated: 2022/05/09 22:56:20 by faventur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_remove_if(t_list **begin_list, void *data_ref,
			int (*cmp)(), void (*free_fct)(void *))
{
	t_list	*current;
	t_list	*tmp;
	t_list	*prev;

	current = begin_list;
	while (!cmp(data_ref, (*begin_list)->data))
	{
		tmp = *begin_list;
		free_fct(tmp->data);
		free(tmp);
		*begin_list = (*begin_list)->next;
	}
//	prev = *begin_list;
	while (current)
	{
		if (!cmp(data_ref, current->data))
		{
			tmp = current;
			free_fct(tmp->data);
			free(tmp);
		}
		prev = current;
		current = current->next;
	}
}
