/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aal-hamm <aal-hamm@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 10:32:47 by aal-hamm          #+#    #+#             */
/*   Updated: 2022/06/04 12:06:15 by aal-hamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0' && nb)
	{
		dest[i] = src[j];
		j++;
		i++;
		nb--;
	}
	dest[i] = '\0';
	return (dest);
}

#include <stdio.h>
int main(void)
{
    char    a[] = "hpy";
    char    b[] = "hey";
    printf("%s", ft_strncat(b, a, 2));
    return (0);
}
