/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faventur <faventur@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 16:50:17 by faventur          #+#    #+#             */
/*   Updated: 2022/05/07 17:35:29 by faventur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_sort(t_list **begin_list, int (*cmp)())
{
	t_list	*current;
	t_list	*temp;
	void	*temp_item;

	current = *begin_list;
	while (current->next)
	{
		temp = current->next;
		while (temp)
		{
			if (cmp(current->data, temp->data) > 0)
			{
				temp_item = temp->data;
				temp->data = current->data;
				current->data = temp_item;
			}
			temp = temp->next;
		}
		current = current->next;
	}
}
