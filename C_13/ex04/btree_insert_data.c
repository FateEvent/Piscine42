/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_insert_data.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faventur <faventur@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/01 18:10:57 by faventur          #+#    #+#             */
/*   Updated: 2022/05/02 17:16:49 by faventur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	btree_insert_data(t_btree **root, void *item, int (*cmpf)
			(void *, void *))
{
	void	*temp;

	if (root)
	{
		if (*root)
		{
			if (cmpf((*root)->item, item) > 0)
			{
				temp = (*root)->item;
				(*root)->item = item;
				item = temp;
			}
			if ((*root)->left)
				btree_insert_data(&(*root)->left, item, cmpf);
			if ((*root)->right)
				btree_insert_data(&(*root)->right, item, cmpf);
			else
				(*root) = btree_create_node(item);
		}
	}
}
