/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_verif_parameter.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbastiat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/17 15:00:53 by jbastiat          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2025/08/17 16:12:32 by jbastiat         ###   ########.fr       */
=======
/*   Updated: 2025/08/17 15:28:53 by sebavaro         ###   ########.fr       */
>>>>>>> refs/remotes/origin/master
/*                                                                            */
/* ************************************************************************** */

int	ft_verif_parameter(char *para)
{
	int	i;

	while (para[i])
	{
		if (i % 2 == 1 && !(para[i] % 2 >= '0') && (para[i] % 2 <= '9'))
		{
			return (1);
		}
		if (i % 2 == 0 && !(para[i] % 2 >= ' '))
		{
			return (1);
		}
		i++;
	}
	return (0);
}
/*#include <stdio.h>
int	main()
{
	printf("%d",ft_verif_parameter("1 2 3 4 1 2 2 2 1 2 3 4 1 2 2 2"));
}*/
