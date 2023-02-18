/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aal-hamm <aal-hamm@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 15:57:44 by aal-hamm          #+#    #+#             */
/*   Updated: 2022/05/30 08:25:53 by aal-hamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	a;
	int	b;
	int	swap;

	a = 0;
	b = size + 1;
	while (a < size)
	{
		if(tab[a] > tab[b])
		{
			swap = tab[a];
			tab[a] = tab[b];
			tab[b] = swap;
			a = 0;
		}
		else
			a++;
	}
}

#include <stdio.h>
int	main(void)
{
	int tab[] = {1, 9, 3, 7, 5};
	ft_sort_int_tab(tab, 5);

	int i;
	i = 0;
	while (i < 5)
	{
		printf("%d",tab[i]);
		i++;
	}
}
