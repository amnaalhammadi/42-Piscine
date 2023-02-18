/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aal-hamm <aal-hamm@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 11:23:44 by aal-hamm          #+#    #+#             */
/*   Updated: 2022/06/01 12:12:21 by aal-hamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (to_find[j] != '\0' && to_find[j] == str[i])
		{
			i++;
			j++;
			if (to_find[j] == '\0')
				return (&str[i - j]);
		}
		i++;
	}
	if (to_find[0] == '\0')
		return (str);
	return (0);
}

/*
#include <stdio.h>
int main(void)
{
	char str[] = "hey amna lasjddo";
	char to_find[] = "amna";
	printf("%s", ft_strstr(str, to_find));
	return (0);
}*/
