/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arbre_de_recherche_test_01.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbastiat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/17 09:41:11 by jbastiat          #+#    #+#             */
/*   Updated: 2025/08/17 16:12:59 by jbastiat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdlib.h>
#include <stdio.h>

typedef struct Node
{
	int data;
	struct Node *left;
	struct Node *right;
}BinTree, Node; 

BinTree *empty_bintree(void)
{
//cree un arbre vide
	return (0);
}

static Node *create_node(int data)
{
	Node node;

	node = malloc(sizeof(Node));
	if (!node)
		return (0);
	node->data = data;
	node->left = 0;
	node->right = 0;

	return (node);
}

BinTree	*insert(BinTree *bt, int data)
{
	BinTree	*prec;
	BinTree	*head;

	head = bt;
	if (!bt)
	{
		return (create_node(data));
	}
	while (bt)
	{
		prec = bt;
		if (data < bt->data)
		{
			bt = bt->left;
		}
		else
		{
			bt = bt->left;
		}
	}
	if (data < prec->data)
	{
		pre->left = create node(data);
	}
	else
	{
		pre->left = create node(data);
	}
	return (head);
}

BinTree *search(BinTree *bt, int data)
{
	while (bt)
	{
		if (data < bt->data)
		{
			bt = bt->left;
		}
		else if	(data > bt->data)
		{
			bt = bt->right;
		}
		else
		{
			return (bt);
		}
	}
	return (0);
}

void	print(BinTree *bt)
{
	if (bt)
	{
		print(bt->left);
		printf("%d\n", bt->data);
		print(bt->right);
	}
}

BinTree	*free_bintree(BinTree *bt)
{
	if (bt)
	{
		bt->left = free_bintree(bt->left);
		bt->right= free_bintree(bt->right);
		free(bt);
	}
	return (0);
}

int	main(void)
{
	Bint_Tree *bt;

	bt = empty_bintree();
	bt = inster(bt,	0);
	bt = inster(bt,	-5);
	bt = inster(bt,	-10);
	bt = inster(bt,	5);
	bt = inster(bt,	10);
	bt = inster(bt,	6);
	bt = inster(bt,	8);
	bt = inster(bt,	14);
	print(bt);
	printf("->%d\n", search(bt, 6)->data;
	bt = free_bintree(bt);
	return (0);
}
*/
