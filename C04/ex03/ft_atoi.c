/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aal-hamm <aal-hamm@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 12:18:56 by aal-hamm          #+#    #+#             */
/*   Updated: 2022/06/01 12:48:23 by aal-hamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_atoi(char *str)
{
	int	i;
	int	j;
	int	result;

	i = 0;
	j = 1;
	result = 0;
	while (str[i] != '\0' && (str[i] == '\n' || str[i] == ' ' || str[i] == '\v'
			|| str[i] == '\t' || str[i] == 0x20 || str[i] == '\f'))
		i++;
	while (str[i] != '\0' && (str[i] == '+' || str[i] == '-'))
	{
		if (str[i] == '-')
			j *= -1;
		i++;
	}
	while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (result * j);
}

/*
#include <stdio.h>
int	main(void)
{
	printf("%d\n", ft_atoi(" ---+--+1234ab567"));
	return (0);
}*/
