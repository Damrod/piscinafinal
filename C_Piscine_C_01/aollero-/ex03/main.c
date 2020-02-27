/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aollero- <aollero@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/07 01:26:52 by aollero-          #+#    #+#             */
/*   Updated: 2020/02/12 22:14:05 by aollero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_div_mod.c"
#include <unistd.h>
#include <stdio.h>

int		main(void)
{
	int a;
	int b;
	int div;
	int mod;
	char diff;
	char dif2;

	a = 10;
	b = 3;
	ft_div_mod(a, b, &div, &mod);
	printf("q = %d , r = %d", div, mod);
	diff = 48 + div;
	dif2 = 48 + mod;
	write(1, &diff, 1);
	write(1, " ", 1);
	write(1, &dif2, 1);
}
