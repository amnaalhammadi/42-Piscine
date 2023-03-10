/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aal-hamm <aal-hamm@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/05 15:22:00 by aal-hamm          #+#    #+#             */
/*   Updated: 2022/06/06 12:05:25 by aal-hamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	main(int ac, char **av)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	while (ac > j)
	{
		i = 0;
		while (av[j][i] != '\0')
		{
			write(1, &av[j][i], 1);
			i++;
		}
		write(1, "\n", 1);
		j++;
	}
	return (0);
}
