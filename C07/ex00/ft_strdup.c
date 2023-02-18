/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aal-hamm <aal-hamm@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 13:12:53 by aal-hamm          #+#    #+#             */
/*   Updated: 2022/06/06 15:14:13 by aal-hamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int	ft_len(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*m;
	int	i;

	i = 0;
	m = (char *) malloc (sizeof (char) * ft_len(src) + 1);
	while (src[i] != '\0')
	{
		m[i] = src[i];
		i++;
	}
	m[i] = '\0';
	return (m);
}
/*
int main(void)
{
	char *i;
	i = "asdfg";
	printf("%s", ft_strdup(i));
}*/
