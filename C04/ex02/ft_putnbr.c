/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aal-hamm <aal-hamm@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 13:29:11 by aal-hamm          #+#    #+#             */
/*   Updated: 2022/06/05 13:52:43 by aal-hamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putnbr(nb / 10);
		ft_putchar('8');
	}
	else if (nb == 2147483647)
	{
		ft_putnbr(nb / 10);
		ft_putchar('7');
	}
	else if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else if (nb < 0)
	{
		ft_putchar('-');
		ft_putnbr(-nb);
	}	
	else
	{
		ft_putchar(nb + 48);
	}
}
/*
int	main(void)
{
	ft_putnbr(-2147483648);
	ft_putnbr(2147483647);
	ft_putnbr(-12);
	return (0);
}*/
