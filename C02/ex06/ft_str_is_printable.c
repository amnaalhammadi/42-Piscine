/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aal-hamm <aal-hamm@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 13:19:59 by aal-hamm          #+#    #+#             */
/*   Updated: 2022/05/31 11:29:37 by aal-hamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 32) && (str[i] <= 126))
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
	char a[] = "	";
	char b[]= "127";

	printf("%d\n", ft_str_is_printable(a));
	printf("%d\n", ft_str_is_printable(b));
	return (0);
}*/
