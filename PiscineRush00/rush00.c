/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: analaphi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/09 08:25:19 by analaphi          #+#    #+#             */
/*   Updated: 2025/08/09 15:27:55 by lemartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_first_line(int x)
{
	int	i;

	i = 0;
	while (i < x)
	{
		if (i == 0)
		{
			ft_putchar('o');
		}
		else if (i == x - 1)
		{
			ft_putchar('o');
		}
		else
		{
			ft_putchar('-');
		}
		i++;
	}
}

void	ft_body_line(int x)
{
	int	i;

	i = 0;
	while (i < x)
	{
		if (i == 0)
		{
			ft_putchar('|');
		}
		else if (i == x - 1)
		{
			ft_putchar('|');
		}
		else
		{
			ft_putchar(' ');
		}
		i++;
	}
}

void	ft_last_line(int x)
{
	int	i;

	i = 0;
	while (i < x)
	{
		if (i == 0)
		{
			ft_putchar('o');
		}
		else if (i == x - 1)
		{
			ft_putchar('o');
		}
		else
		{
			ft_putchar('-');
		}
		i++;
	}
}

void	rush(int x, int y)
{
	int	i;

	i = 0;
	if (i == 0)
	{
		ft_first_line(x);
		i++;
		ft_putchar('\n');
	}
	while (i > 0 && i < y - 1)
	{
		ft_body_line(x);
		i++;
		ft_putchar('\n');
	}
	if (i == y - 1)
	{
		ft_last_line(x);
		i++;
		ft_putchar('\n');
	}
}
