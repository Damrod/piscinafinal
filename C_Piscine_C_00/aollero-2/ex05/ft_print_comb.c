/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aollero- <aollero-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/09 19:59:51 by aollero-          #+#    #+#             */
/*   Updated: 2020/02/09 23:58:48 by aollero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_lastloop(char i, char j)
{
	char		k;

	k = '2';
	while (k <= '9')
	{
		if ((i < j) && (j < k) && (i < k))
		{
			ft_putchar(i);
			ft_putchar(j);
			ft_putchar(k);
			if ((i != '7') || (j != '8') || (k != '9'))
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
		}
		k++;
	}
}

void	ft_print_comb(void)
{
	char		i;
	char		j;

	i = '0';
	while (i <= '9')
	{
		j = '1';
		while (j <= '9')
		{
			ft_lastloop(i, j);
			j++;
		}
		i++;
	}
}
