/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clue_1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbastiat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/16 17:37:16 by jbastiat          #+#    #+#             */
/*   Updated: 2025/08/16 18:38:54 by jbastiat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	**clue_1(char **argv_sans_espaces, char **matrice, int size)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (argv_sans_espaces[i])
	{
		if (argv_sans_espaces[0][j] == '1')
			matrice[0][j] = size + '0';
		if (argv_sans_espaces[1][j] == '1')
			matrice[0 + size][j] = size + '0';
		if (argv_sans_espaces[2][j] == '1')
			matrice[0][j] = size + '0';
		if (argv_sans_espaces[3][j] == '1')
			matrice[0 + size][j] = size + '0';
		j++;
	}
	return (matrice);
}
/*l'information vaut 1 -> on a size devant nous*/
