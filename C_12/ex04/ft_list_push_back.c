/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_BACK.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faventur <faventur@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 16:50:17 by faventur          #+#    #+#             */
/*   Updated: 2022/05/06 17:35:41 by faventur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list	*new;

	new = ft_create_elem(data);
	while (begin_list->next)
		begin_list = begin_list->next;
	*begin_list->next = new;
}
