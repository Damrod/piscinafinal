/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aollero- <aollero-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/10 21:28:06 by aollero-          #+#    #+#             */
/*   Updated: 2020/02/11 21:34:42 by aollero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_is_negative(int n)
{
	if (n < 0)
		write(1, "-", 1);
}

int		ft_abint(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}
	else
		return (n);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		nb = nb / 10;
		ft_putnbr(nb);
		ft_putchar('8');
	}
	else
	{
		if (nb < 0)
		{
			ft_is_negative(nb);
			nb = ft_abint(nb);
		}
		if (nb > 9)
		{
			ft_putnbr(nb / 10);
		}
		ft_putchar('0' + nb % 10);
	}
}
