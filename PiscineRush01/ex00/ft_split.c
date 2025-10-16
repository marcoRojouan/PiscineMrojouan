/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbastiat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/16 13:11:37 by jbastiat          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2025/08/17 16:16:28 by jbastiat         ###   ########.fr       */
=======
/*   Updated: 2025/08/17 15:31:37 by sebavaro         ###   ########.fr       */
>>>>>>> refs/remotes/origin/master
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	**ft_split(char *str, int size)
{
	int		i;
	int		j;
	char	**pointer_one;

	pointer_one = malloc(sizeof (char *) * (size + 1));
	i = 0;
	while (i < size)
	{
		pointer_one[i] = malloc(sizeof(char) * (4 + 1));
		i++;
	}
	j = 0;
	while (str[i] && j < 4)
	{
		i = 0;
		while (i < 8 && (str[i] >= '1' && str[i] <= '4'))
		{
			pointer_one[j][i / 2] = str[i];
			i = i + 2;
		}
		str = str + (i);
		j = j + 1;
	}
	return (pointer_one);
}
/*faut tester que le tableau(** / *) ai bien ete cree avec un if 
if !tableau
	free ...
	return (1);
et faut free toute la memoire qu'on alloue pas que la ligne/tableau
qui ne fonctionne pas
*/
