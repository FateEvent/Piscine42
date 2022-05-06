/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_by_level.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faventur <faventur@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 11:23:18 by faventur          #+#    #+#             */
/*   Updated: 2022/05/06 12:46:41 by faventur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	btree_apply_by_level(t_btree *root, void (*applyf)
			(void *item, int current_level, int is_first_elem))
{
	
}

int	btree_level_count(t_btree *root)
{
	int	lheight;
	int	rheight;

	if (root)
	{
		lheight = btree_level_count(root->left);
		rheight = btree_level_count(root->right);
		if (lheight > rheight)
			return (lheight + 1);
		else
			return (rheight + 1);
	}
	return (0);
}

// Function to print all nodes of a given level from left to right
int	printLevel(t_btree *root, int level, int is_first_elem)
{
	int	left;
	int	right;

	if (root == NULL)
	{
		return (0);
	}
	if (level == 1)
	{
		applyf(root->item, level, is_first_elem);
		// return true if at least one node is present at a given level
		return 1;
	}
	left = printLevel(root->left, level - 1, is_first_elem);
	right = printLevel(root->right, level - 1, is_first_elem);
	return (left || right);
}
// Function to print level order traversal of a given binary tree
void	levelOrderTraversal(t_btree *root, int is_first_elem)
{
	// start from level 1 — till the height of the tree
	int level;

	level = 1;
	// run till printLevel() returns false
	while (printLevel(root, level, is_first_elem))
		level++;
}

https://www.techiedelight.com/level-order-traversal-binary-tree/