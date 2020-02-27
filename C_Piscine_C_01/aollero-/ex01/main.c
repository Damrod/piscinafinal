/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aollero- <aollero@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/07 01:26:52 by aollero-          #+#    #+#             */
/*   Updated: 2020/02/18 20:20:45 by aollero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ultimate_ft.c"
#include <unistd.h>
#include <stdio.h>

int		main(void)
{
	int nbr0;
	int *nbr1;
	int **nbr2;
	int ***nbr3;
	int ****nbr4;
	int *****nbr5;
	int ******nbr6;
	int *******nbr7;
	int ********nbr8;
	int *********nbr;

	nbr0 = 123;
	nbr1 = &nbr0;
	nbr2 = &nbr1;
	nbr3 = &nbr2;
	nbr4 = &nbr3;
	nbr5 = &nbr4;
	nbr6 = &nbr5;
	nbr7 = &nbr6;
	nbr8 = &nbr7;
	nbr = &nbr8;

	ft_ultimate_ft(nbr);
	write(1, ********nbr, 1);
	printf("%d\n", *********nbr);
}
