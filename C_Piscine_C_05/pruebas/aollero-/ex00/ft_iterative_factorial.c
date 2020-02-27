/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aollero- <aollero@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 13:32:44 by aollero-          #+#    #+#             */
/*   Updated: 2020/02/27 20:41:07 by aollero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int i;

	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	i = nb - 1;
	while (i > 0)
	{
		nb = nb * i;
		i--;
	}
	return (nb);
}
