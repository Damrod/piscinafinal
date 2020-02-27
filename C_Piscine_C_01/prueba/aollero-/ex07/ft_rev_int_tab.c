/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aollero- <aollero@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/18 16:12:43 by aollero-          #+#    #+#             */
/*   Updated: 2020/02/18 18:10:49 by aollero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int z[size];
	int i;
	int j;

	i = size - 1;
	j = 0;
	while (i >= 0)
	{
		z[j] = tab[i];
		i--;
		j++;
	}
	i = 0;
	while (i < size)
	{
		tab[i] = z[i];
		i++;
	}
}
