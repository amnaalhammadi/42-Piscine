/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aal-hamm <aal-hamm@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 08:46:44 by aal-hamm          #+#    #+#             */
/*   Updated: 2022/06/04 11:05:26 by aal-hamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_strncmp(char	*s1, char	*s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && i < n)
	{
		if (s1[i] == s2[i])
			i++;
		else
			return (s1[i] - s2[i]);
	}
	if (i != n)
		return (s1[i] - s2[i]);
	return (0);
}

/*
#include <stdio.h>
int main(void)
{
    printf("%d\n", ft_strncmp("amna", "hey", 2));
    printf("%d\n", ft_strncmp("amna", "amna", 5));
	printf("%d\n", strncmp("amna", "hey", 2));
    return (0);
}*/
