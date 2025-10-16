/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrojouan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 11:55:16 by mrojouan          #+#    #+#             */
/*   Updated: 2025/08/24 16:22:07 by mrojouan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strdup(char *src)
{
	char	*duplicate;
	int		src_size;

	src_size = ft_strlen(src);
	duplicate = NULL;
	duplicate = malloc(sizeof(char) * (src_size + 1));
	if (!duplicate)
		return (0);
	duplicate = ft_strcpy(duplicate, src);
	return (duplicate);
}
