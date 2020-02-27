/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aollero- <aollero-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/07 01:26:52 by aollero-          #+#    #+#             */
/*   Updated: 2020/02/12 21:42:58 by aollero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_swap.c"
#include <unistd.h>
#include <stdio.h>

int		main(void)
{
	int a;
	int b;

	a = 8;
	b = 7;
	ft_swap(&a, &b);
	write(1, &a, 1);
	write(1, &b, 1);
	printf("%d %d\n", a, b);
}
