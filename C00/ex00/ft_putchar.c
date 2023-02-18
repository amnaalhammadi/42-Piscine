/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aal-hamm <aal-hamm@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 16:49:53 by aal-hamm          #+#    #+#             */
/*   Updated: 2022/05/25 14:22:24 by aal-hamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
/*
void	ft_putchar(char c);

int	main(void)
{
	ft_putchar('Z');
	ft_putchar('\n');
	return (0);
} */

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
