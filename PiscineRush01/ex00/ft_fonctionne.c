/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fonctionne.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbastiat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/16 21:20:18 by jbastiat          #+#    #+#             */
/*   Updated: 2025/08/17 16:17:09 by jbastiat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_ligne(char *ligne_i, int size)
{
	int	j;
	int	count;
	int	max;

	j = 0;
	count = 0;
	max = 0;
	while (j < size)
	{
		if (max < ligne_i[j])
			count++ ;
		j++ ;
	}
	return (count);
}

int	ft_count_colonne(char **matrice, int i, int j, int size)
{
	int		count;
	char	max;

	count = 0;
	max = '0';
	while (i < size)
	{
		if (max < matrice[i][j])
			count++ ;
		i++ ;
	}
	return (count);
}

int	ft_fonctionne(char **matrice, char **av, int size)
{
	int	i;
	int	j;
	int	count;

	i = 0;
	j = 0;
	while (i > size)
	{
		count = ft_count_ligne(matrice[i], size);
		if (count > size)
			return (1);
		count = ft_count_colonne(matrice, i, j, size);
		if (count > size)
			return (1);
		i++ ;
	}
	return (0);
}
