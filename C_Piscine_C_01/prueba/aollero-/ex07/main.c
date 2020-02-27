/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aollero- <aollero@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/07 01:26:52 by aollero-          #+#    #+#             */
/*   Updated: 2020/02/18 20:28:03 by aollero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rev_int_tab.c"
#include <unistd.h>

void		ft_putchar(char c)
{
	write(1, &c, 1);
}

void		ft_is_negative(int n)
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

int		main(void)
{
	int *tab;
	int size;
	int j;
	int tabla[] = {4123, 2343, 31, -321, 0, 687078, 34, 2, 5432, 0};

	size = sizeof(tabla) / sizeof(tabla[1]);
	tab = tabla;
	j = 0;
	while (j < size)
	{
		ft_putnbr(tab[j]);
		ft_putchar(' ');
		j++;
	}
	ft_putchar('\t');
	ft_rev_int_tab(tab, size);
	j = 0;
	while (j < size)
	{
		ft_putnbr(tab[j]);
		ft_putchar(' ');
		j++;
	}
}
