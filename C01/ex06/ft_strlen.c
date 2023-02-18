/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aal-hamm <aal-hamm@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 11:32:31 by aal-hamm          #+#    #+#             */
/*   Updated: 2022/05/30 10:47:36 by aal-hamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count] != ('\0'))
	{
		count ++;
	}
	return (count);
}

/*
int	main(void)
{
	printf("%d", ft_strlen("amnb"));
	return (0);
} 
*/
