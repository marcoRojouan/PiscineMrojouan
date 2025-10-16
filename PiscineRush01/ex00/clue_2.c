/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clue_2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbastiat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/16 17:43:53 by jbastiat          #+#    #+#             */
/*   Updated: 2025/08/16 18:25:18 by jbastiat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	**clue_2(int dirrection, int x, int y, char **matrice)
{
	int	nb;

	nb = 1;
	while (nb <= 4)
	{
		if (dirrection == 1)
			matrice[x][y + nb - 1] = nb;
		else if (dirrection == 2)
			matrice[x][y - nb + 1] = nb;
		else if (dirrection == 3)
			matrice[x + nb - 1][y] = nb;
		else if (dirrection == 4)
			matrice[x - nb + 1][y] = nb;
		nb++;
	}
	return (matrice);
}

/*
	dirrection permet de savoir si il faut incrementer matrice suivant x ou y
*/
