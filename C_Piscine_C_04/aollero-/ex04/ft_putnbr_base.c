/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aollero- <aollero@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/10 21:28:06 by aollero-          #+#    #+#             */
/*   Updated: 2020/02/27 02:06:58 by aollero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int				ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

void			ft_is_negative(int n)
{
	if (n < 0)
		write(1, "-", 1);
}

int				ft_abint(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}
	else
		return (n);
}

int				is_base_valid(char *base)
{
	char	*aux;
	int		j;
	int		k;

	aux = base;
	if (ft_strlen(base) < 2)
		return (0);
	k = 0;
	while (base[k] != '\0')
	{
		if (base[k] == '\t' || base[k] == '\n' || base[k] == '\v'
		|| base[k] == '\f' || base[k] == '\r' || base[k] == ' '
		|| base[k] == '+' || base[k] == '-')
			return (0);
		j = k;
		while (aux[j] != '\0')
		{
			if (aux[j] == base[k] && j != k)
				return (0);
			j++;
		}
		k++;
	}
	return (1);
}

void			ft_putnbr_base(int nbr, char *base)
{
	int i;

	if (!is_base_valid(base))
		return ;
	i = ft_strlen(base);
	if (nbr == -2147483648)
	{
		ft_putnbr_base(nbr / i, base);
		nbr %= 1000000000;
		nbr = -nbr;
		write(1, &base[nbr % i], 1);
	}
	else
	{
		if (nbr < 0)
		{
			ft_is_negative(nbr);
			nbr = ft_abint(nbr);
		}
		if (nbr > 9)
		{
			ft_putnbr_base(nbr / i, base);
		}
		write(1, &(base[nbr % i]), 1);
	}
}
