/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aal-hamm <aal-hamm@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 09:00:47 by aal-hamm          #+#    #+#             */
/*   Updated: 2022/06/04 09:24:35 by aal-hamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_recursive_power(int nb, int power)
{
	int	i;

	i = nb;
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	else if (power > 0)
		return (i * ft_recursive_power(nb, power - 1));
	return (i);
}

/*
#include <stdio.h>
int main(void)
{
    printf("%d",ft_recursive_power(2, 2));
    return (0);
}*/
