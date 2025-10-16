/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_condition_a_verifier.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbastiat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/16 10:49:35 by jbastiat          #+#    #+#             */
/*   Updated: 2025/08/17 16:11:00 by jbastiat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char av_splited);

int	ft_condition_a_verifier_reduit(char *av_splited, int size)
{
	int	somme;
	int	deja_vu;
	int	j;

	j = 0;
	somme = 0;
	deja_vu = 0;
	while (j != size)
	{
		somme = somme + ft_atoi(av_splited[j]);
		if (ft_atoi(av_splited[j]) > size || ft_atoi(av_splited[j]) < 1
			|| somme > 15 || deja_vu / 10 > 1 || deja_vu % 10 > 1)
			return (1);
		if (ft_atoi(av_splited[j]) == size)
			deja_vu = 10;
		else if (ft_atoi(av_splited[j]) == 1)
			deja_vu = 1;
		j++ ;
	}
	return (0);
}

int	ft_condition_a_verifier(char **av_splited, int size)
{
	int	i;
	int	j;

	i = 0;
	while (av_splited[i] != 0)
	{
		j = 0;
		if (ft_condition_a_verifier_reduit(av_splited[i], size) == 1)
			return (1);
		while (j < size)
		{
			if ((ft_atoi(av_splited[i][j]) + ft_atoi(av_splited[i + size][j]) >
					size + 1))
				return (1);
			j++;
		}
		i++ ;
	}
	return (0);
}
