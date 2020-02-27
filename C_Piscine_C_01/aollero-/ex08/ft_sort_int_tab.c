/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aollero- <aollero@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/18 17:24:30 by aollero-          #+#    #+#             */
/*   Updated: 2020/02/19 16:04:40 by aollero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		ft_sort_int_tab(int *tab, int size)
{
	int		i;
	int		j;
	int		z;
	int		m;
	int		min;

	i = 0;
	while (i < size - 1)
	{
		j = i + 1;
		min = tab[i];
		while (j < size)
		{
			if (tab[j] < min)
			{
= z;
		i++;
	}
}
