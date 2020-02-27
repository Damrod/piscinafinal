/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aollero- <aollero@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 17:35:09 by aollero-          #+#    #+#             */
/*   Updated: 2020/02/27 19:54:04 by aollero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_power(int nb, int power)
{
	int num;

	num = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (power > 0)
	{
		num = nb * ft_recursive_power(nb, power - 1);
	}
	return (num);
}
