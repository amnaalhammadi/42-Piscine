/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aal-hamm <aal-hamm@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 13:14:42 by aal-hamm          #+#    #+#             */
/*   Updated: 2022/05/26 13:19:08 by aal-hamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
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
	char a[] = "";
	char b[] = "HDJBS";

	printf("%d\n", ft_str_is_uppercase(a));
	printf("%d\n", ft_str_is_uppercase(b));
	return (0);
}*/
