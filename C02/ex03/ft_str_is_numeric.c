/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aal-hamm <aal-hamm@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 12:52:52 by aal-hamm          #+#    #+#             */
/*   Updated: 2022/05/31 09:15:23 by aal-hamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= '0') && (str[i] <= '9'))
		i++;
		else
			return (0);
	}
	return (1);
}

/*
#include <stdio.h>
int	main(void)
{
	char a [] = "2135";
	char b [] = "asd";
	printf("%d\n", ft_str_is_numeric(a));
	printf("%d", ft_str_is_numeric(b));
	return (0);
}*/
