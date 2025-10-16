/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_creer_mat.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbastiat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/16 10:46:28 by jbastiat          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2025/08/17 16:17:40 by jbastiat         ###   ########.fr       */
=======
/*   Updated: 2025/08/17 15:27:26 by sebavaro         ###   ########.fr       */
>>>>>>> refs/remotes/origin/master
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdlib.h>

char	**ft_creer_mat(int size)
{
	char	**mat;
	int		i;
	int		j;

	i = 0;
	mat = malloc(sizeof(char *) * (size + 1));
	while (i < size)
	{
		mat[i] = malloc(sizeof(char) * (size + 1));
		i++;
	}
	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			write(1, mat[j], 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
	return (mat);
}
