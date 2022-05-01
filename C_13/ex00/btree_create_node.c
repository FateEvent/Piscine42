/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_create_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faventur <faventur@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/01 15:15:43 by faventur          #+#    #+#             */
/*   Updated: 2022/05/01 18:09:42 by faventur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

t_btree	*btree_create_node(void *item)
{
	t_btree	*new;

	new = (t_btree *)malloc(sizeof(*new));
	if (new)
	{
		new->item = item;
		new->left->item = 0;
		new->left->left = NULL;
		new->left->right = NULL;
		new->right->item = 0;
		new->right->left = NULL;
		new->right->right = NULL;
		return (new);
	}
	return (NULL);
}
