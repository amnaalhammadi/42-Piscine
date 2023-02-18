/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aal-hamm <aal-hamm@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 08:44:36 by aal-hamm          #+#    #+#             */
/*   Updated: 2022/06/08 11:19:50 by aal-hamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_iterative_power(int nb, int power)
{
	unsigned int	i;

	i = 1;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power > 0)
	{
		i *= nb;
		power--;
	}
	return (i);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("%d\n", ft_iterative_power(2, 2));
	printf("%d\n", ft_iterative_power(2, -2));
	printf("%d\n", ft_iterative_power(2, 0));
	return (0);
}*/
