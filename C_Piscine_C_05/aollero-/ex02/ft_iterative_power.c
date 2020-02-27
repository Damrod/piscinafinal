/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aollero- <aollero@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 17:35:09 by aollero-          #+#    #+#             */
/*   Updated: 2020/02/27 19:53:42 by aollero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int aux;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	aux = nb;
	while (power > 1)
	{
		aux = aux * nb;
		power--;
	}
	return (aux);
}
