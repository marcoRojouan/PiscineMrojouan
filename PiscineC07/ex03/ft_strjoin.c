/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrojouan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/21 09:43:23 by mrojouan          #+#    #+#             */
/*   Updated: 2025/08/25 16:16:37 by mrojouan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	dest_len;
	int	i;

	dest_len = ft_strlen(dest);
	i = 0;
	while (src[i] != '\0')
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest);
}

char	*return_empty(void)
{
	char	*empty_str;

	empty_str = malloc(sizeof(char) * 1);
	empty_str[0] = '\0';
	return (empty_str);
}

int	total_size(int size, char **strs, char *sep)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (i < size)
		len = len + ft_strlen(strs[i++]);
	len = len + (ft_strlen(sep) * (size -1));
	return (len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*tab;
	int		i;

	if (size == 0)
	{
		tab = return_empty();
		return (tab);
	}
	tab = malloc(sizeof(char) * (total_size(size, strs, sep) + 1));
	tab[0] = '\0';
	i = 0;
	while (i < size)
	{
		tab = ft_strcat(tab, strs[i]);
		if (i != size - 1)
			tab = ft_strcat(tab, sep);
		i++;
	}
	return (tab);
}
