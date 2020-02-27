/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aollero- <aollero@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 15:39:26 by aollero-          #+#    #+#             */
/*   Updated: 2020/02/27 20:42:21 by aollero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_factorial(int nb)
{
	int i;

	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	if (nb < 2)
		return (1);
	i = nb * ft_recursive_factorial(nb - 1);
	return (i);
}
