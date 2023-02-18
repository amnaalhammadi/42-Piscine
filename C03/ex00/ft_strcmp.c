/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aal-hamm <aal-hamm@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 08:22:11 by aal-hamm          #+#    #+#             */
/*   Updated: 2022/05/30 09:03:01 by aal-hamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_strcmp(char	*s1, char	*s2)
{
	int	i;	

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

/*
#include <stdio.h>
int	main(void)
{
	printf("%d\n", ft_strcmp("amna", "amna"));
	printf("%d\n", ft_strcmp("amna", "heyy"));
	return (0);
} */
