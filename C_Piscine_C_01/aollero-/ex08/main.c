/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aollero- <aollero@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/07 01:26:52 by aollero-          #+#    #+#             */
/*   Updated: 2020/02/18 23:38:09 by aollero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_sort_int_tab.c"
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
	int tabla[] = {1, 23, 3, 0, -1, -32412, 4123, 231, -4132, 3, 3};

	size = sizeof(tabla) / sizeof(tabla[0]);
	tab = tabla;
	j = 0;
	while (j < size)
	{
		ft_putnbr(tab[j]);
		ft_putchar(' ');
		j++;
	}
	ft_putchar('\t');
	ft_sort_int_tab(tabla, size);
	j = 0;
	while (j < size)
	{
		ft_putnbr(tab[j]);
		ft_putchar(' ');
		j++;
	}
}
