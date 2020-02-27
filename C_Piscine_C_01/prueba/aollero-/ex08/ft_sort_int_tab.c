/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aollero- <aollero@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/18 17:24:30 by aollero-          #+#    #+#             */
/*   Updated: 2020/02/19 16:01:43 by aollero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// void		ft_sort_int_tab(int *tab, int size)
// {
// 	int		i;
// 	int		j;
// 	int		z;
// 	int		m;
// 	int		min;

// 	i = 0;
// 	while (i < size)
// 	{
// 		j = i;
// 		min = tab[i];
// 		while (j < size)
// 		{
// 			if (tab[j] < min)
// 			{
// 				m = j;
// 				min = tab[j];
// 			}
// 			j++;
// 		}
// 		z = tab[m];
// 		tab[m] = tab[i];
// 		tab[i] = z;
// 		i++;
// 	}
// }

void		ft_sort_int_tab(int *tab, int size)
{
	int		i;
	int		j;
	int		aux;

	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (tab[i] > tab[j])
			{
				aux = tab[i];
				tab[i] = tab[j];
				tab[j] = aux;
			}
			j++;
		}
		i++;
	}
}
