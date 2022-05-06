/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_strs.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faventur <faventur@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 16:50:17 by faventur          #+#    #+#             */
/*   Updated: 2022/05/06 19:43:33 by faventur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list	*new;

	new = ft_create_elem(data);
	if (new)
	{
		new->next = *begin_list;
		*begin_list = new;
	}
}

t_list	*ft_list_push_strs(int size, char **strs)
{
	t_list	*new_lst;
	int		i;

	new_lst = NULL;
	i = 0;
	while (i < size)
	{
		ft_list_push_front(&new_lst, strs[i]);
		printf("print %s\n", (char *)new_lst->data);
		i++;
	}
	return (new_lst);
}
