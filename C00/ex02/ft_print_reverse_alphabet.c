/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aal-hamm <aal-hamm@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 11:42:25 by aal-hamm          #+#    #+#             */
/*   Updated: 2022/05/25 14:24:40 by aal-hamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/*
void	ft_putchar(char c);
void	ft_print_reverse_alphabet(void);

int	main(void)
{
	ft_print_reverse_alphabet();
	ft_putchar('\n');
	return (0);
}
*/

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_reverse_alphabet(void)
{
	char	l;

	l = 'z';
	while (l >= 'a')
	{
		ft_putchar(l);
		l--;
	}
}
