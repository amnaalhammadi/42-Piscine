/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aal-hamm <aal-hamm@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 12:20:11 by aal-hamm          #+#    #+#             */
/*   Updated: 2022/05/30 08:37:06 by aal-hamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	a;
	int	b;
	int	swap;

	a = 0;
	b = size - 1;
	while (a < size / 2)
	{
		swap = tab[a];
		tab[a] = tab[b];
		tab[b] = swap;
		a++;
		b--;
	}
}

/*
#include <stdio.h>
int	main(void)
{
	int tab[] = {1, 9, 3, 78, 5};
	ft_rev_int_tab(tab, 5);

	int i;
	i = 0;
	while (i < 5)
	{
		printf(" %d",tab[i]);
		i++;
	}
}*/
