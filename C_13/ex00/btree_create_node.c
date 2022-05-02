/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_create_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faventur <faventur@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/01 15:15:43 by faventur          #+#    #+#             */
/*   Updated: 2022/05/02 14:04:45 by faventur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

t_btree	*btree_create_node(void *item)
{
	t_btree	*new;
	int		l;
	int		r;

	l = 0;
	r = 0;
	new = (t_btree *)malloc(sizeof(*new));
	new->left = (t_btree *)malloc(sizeof(*new->left));
	new->right = (t_btree *)malloc(sizeof(*new->right));
	if (new)
	{
		new->item = item;
		new->left->item = &l;
		new->left->left = NULL;
		new->left->right = NULL;
		new->right->item = &r;
		new->right->left = NULL;
		new->right->right = NULL;
		return (new);
	}
	return (NULL);
}
