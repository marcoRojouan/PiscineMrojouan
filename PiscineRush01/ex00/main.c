/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbastiat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/16 10:25:16 by jbastiat          #+#    #+#             */
/*   Updated: 2025/08/17 16:36:44 by jbastiat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>


char	**ft_creer_mat(int size);
int		ft_condition_a_verifier(char **av_splited, int size);
char	**ft_placing_max(char **av_splited, int size);
char	**ft_split(char *av, int size);
int		ft_verif_parameter(char **av_splited, int size);

int	main(int ac, char **av)
{
	int		i;
	int		size;
	char	**av_splited;
	char	**grid;

	size = 4;
	i = 0;
	if (ac != 2)
		return (1);
	if (ft_verif_parameter(av[1], size) == 1)
		return (1);
	av_splited = ft_split(av[1], size);
	grid = ft_creer_mat(size);
	ft_condition_a_verifier(av_splited, size);
	ft_placing_max(av_splited, size);
	while (i < size)
	{
		free(grid[i]);
		i++;
	}
	i = 0;
	while (i < 4)
	{
		free(av_splited[i]);
		i++;
	}
	free(av_splited);
	free(grid);
	return (0);
}

/*il faut creer une fonction free a mettre avant le return (0);*/
