/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aal-hamm <aal-hamm@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 11:42:25 by aal-hamm          #+#    #+#             */
/*   Updated: 2022/05/29 11:13:58 by aal-hamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/*
void	ft_is_negative(int n);

int	main(void)
{
	ft_is_negative(-9);
	ft_is_negative(9);
	return (0);
} 
*/
void	ft_is_negative(int n)
{
	{
		if (n < 0)
		{
			write(1, "N", 1);
		}
		else
		{
			write(1, "P", 1);
		}
	}
}
