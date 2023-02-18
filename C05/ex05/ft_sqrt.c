/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aal-hamm <aal-hamm@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/05 13:57:58 by aal-hamm          #+#    #+#             */
/*   Updated: 2022/06/06 12:11:54 by aal-hamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	while (i < nb / i)
		i++;
	if (i * i == nb)
		return (i);
	return (0);
}
/*
#include <stdio.h>
int main(void)
{
	int i = 9;
	printf("%d", ft_sqrt(i));
	printf("%d", ft_sqrt(10));
	return (0);
}*/
