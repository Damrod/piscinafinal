/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aollero- <aollero@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/07 01:26:52 by aollero-          #+#    #+#             */
/*   Updated: 2020/02/12 23:57:49 by aollero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ultimate_div_mod.c"
#include <unistd.h>
#include <stdio.h>

int		main(void)
{
	int a;
	int b;
	
	a = 10;
	b = 3;
	ft_ultimate_div_mod(&a, &b);
	printf("q = %d , r = %d", a, b);
}
