/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faventur <faventur@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 16:50:17 by faventur          #+#    #+#             */
/*   Updated: 2022/05/10 11:18:07 by faventur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_remove_if_pt2(t_list **begin_list, void *data_ref,
			int (*cmp)(), void (*free_fct)(void *))
{
	t_list	*current;
	t_list	*tmp;
	t_list	*prev;

	prev = *begin_list;
	current = (*begin_list)->next;
	while (current)
	{
		if (!cmp(current->data, data_ref))
		{
			tmp = current;
			current = current->next;
			prev->next = current;
			free_fct(tmp->data);
			free(tmp);
		}
		else
		{
			prev = current;
			current = current->next;
		}
	}
}

void	ft_list_remove_if(t_list **begin_list, void *data_ref,
			int (*cmp)(), void (*free_fct)(void *))
{
	t_list	*current;
	t_list	*tmp;

	current = *begin_list;
	while (!cmp(data_ref, (*begin_list)->data))
	{
		tmp = *begin_list;
		*begin_list = (*begin_list)->next;
		free_fct(tmp->data);
		free(tmp);
	}
	ft_list_remove_if_pt2(begin_list, data_ref,
		cmp, free_fct);
}
