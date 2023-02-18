/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aal-hamm <aal-hamm@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 13:03:07 by aal-hamm          #+#    #+#             */
/*   Updated: 2022/05/31 09:18:01 by aal-hamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			i++;
		else
			return (0);
	}
	return (1);
}
/*
#include <stdio.h>

int main(void)
{
	char a[] = "ahkrlea";
	char b[] = "HDJBS";

	printf("%d\n", ft_str_is_lowercase(a));
	printf("%d\n", ft_str_is_lowercase(b));
	return (0);
}*/
