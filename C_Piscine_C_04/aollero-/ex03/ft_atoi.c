/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aollero- <aollero@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 22:32:55 by aollero-          #+#    #+#             */
/*   Updated: 2020/02/26 15:46:26 by aollero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		intpower(int a, unsigned int b)
{
	if (b == 0)
		return ('1');
	else if (b == 1)
		return (a);
	else
		return (a * intpower(a, b - 1));
}

int		ft_atoi(char *str)
{
	int					neg_count;
	int					resul;

	neg_count = 0;
	while (*str == '\t' || *str == '\n' || *str == '\v'
	|| *str == '\f' || *str == '\r' || *str == ' ')
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			neg_count++;
		str++;
	}
	resul = 0;
	while (*str >= '0' && *str <= '9')
	{
		resul = 10 * resul + (*str - '0');
		str++;
	}
	return (intpower(-1, neg_count) * resul);
}
