/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aollero- <aollero-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/09 19:59:51 by aollero-          #+#    #+#             */
/*   Updated: 2020/02/12 00:21:59 by aollero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int			i;
	int			j;

	i = 0;
	j = 0;
	while (j <= 99)
	{
		i = j + 1;
		while (i <= 99)
		{
			ft_putchar('0' + j / 10);
			ft_putchar('0' + j % 10);
			ft_putchar(' ');
			ft_putchar('0' + i / 10);
			ft_putchar(48 + i % 10);
			if ((i != 99) || (j != 98))
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			i++;
		}
		j++;
	}
}
