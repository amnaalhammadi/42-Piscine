/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aal-hamm <aal-hamm@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 14:34:46 by aal-hamm          #+#    #+#             */
/*   Updated: 2022/05/25 14:39:28 by aal-hamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
/*
void	ft_print_comb2(void);
void	ft_putchar(char c);

int	main(void)
{
	ft_print_comb2();
	return (0);
}
*/
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	b = 1;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_putchar((a / 10) + 48);
			ft_putchar((a % 10) + 48);
			ft_putchar(' ');
			ft_putchar((b / 10) + 48);
			ft_putchar((b % 10) + 48);
			if (a != 98)
				write(1, ", ", 2);
			b++;
		}
		a++;
	}
}
