/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_by_level.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faventur <faventur@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 11:23:18 by faventur          #+#    #+#             */
/*   Updated: 2022/05/06 13:16:24 by faventur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"
#include <stdio.h>
/*
void	btree_apply_by_level(t_btree *root, void (*applyf)
			(void *item, int current_level, int is_first_elem))
{
	
}
*/
// Function to print all nodes of a given level from left to right
int	print_level(t_btree *root, int level)
{
	int	left;
	int	right;

	if (root == NULL)
	{
		return (0);
	}
	if (level == 1)
	{
		printf("%d\n", *(int *)root->item);
		// return true if at least one node is present at a given level
		return 1;
	}
	left = print_level(root->left, level - 1);
	right = print_level(root->right, level - 1);
	return (left || right);
}
// Function to print level order traversal of a given binary tree
void	levelOrderTraversal(t_btree *root)
{
	// start from level 1 — till the height of the tree
	int level;

	level = 4;
	// run till print_level() returns false
	print_level(root, level);
}

int	cmp(void *s1, void *s2)
{
	if (*(int *)s1 != *(int *)s2)
		return (*(int *)s1 - *(int *)s2);
	return (0);
}

void	ft(void *nb)
{
	*(int *)nb *= 5;
//	printf("%d\n", *(int *)nb);
}

int main()
{
	t_btree	*tree;
	int	a = 1;
	int	b = 5;
	int	c = 3;
	int	d = 15;
	int	e = 10;
	int f = 6;
	int g = 0;
	int l = -1;

	tree = NULL;
	btree_insert_data(&tree, &a, cmp);
	btree_insert_data(&tree, &b, cmp);
	btree_insert_data(&tree, &c, cmp);
	btree_insert_data(&tree, &d, cmp);
	btree_insert_data(&tree, &f, cmp);
	btree_insert_data(&tree, &g, cmp);
	btree_insert_data(&tree, &l, cmp);
	levelOrderTraversal(tree);
}
