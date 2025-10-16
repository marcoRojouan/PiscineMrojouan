/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   placing_max.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbastiat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/16 10:36:57 by jbastiat          #+#    #+#             */
/*   Updated: 2025/08/17 14:57:15 by jbastiat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str);

char	**ft_placing_max(char **av, char **result, int size)
{
	int	i;

	i = 1;
	while (av[i])
	{
		if (ft_strlen(av[i]) == size)
			result[i][0] = size;
		i++ ;
	}
	return (result);
}
