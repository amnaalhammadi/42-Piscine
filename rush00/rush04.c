/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Amna - <aal-hamm@student42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 11:05:37 by plucena-          #+#    #+#             */
/*   Updated: 2022/05/22 16:27:16 by plucena-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	i;
	int	j;

	i = 1;
	j = 1;
	while (j <= y)
	{
		while (i <= x)
		{
			if ((i == 1 && j == 1) || (i == x && j == y && i != 1 && j != 1))
				ft_putchar('A');
			else if ((i == 1 && j == y)
				|| (i == x && j == 1) || (i == x && j == y))
				ft_putchar('C');
			else if ((i == 1) || (i == x) || (j == y) || (j == 1))
				ft_putchar('B');
			else
				ft_putchar(' ');
			i++;
		}
		i = 1;
		ft_putchar('\n');
		j++;
	}
}
