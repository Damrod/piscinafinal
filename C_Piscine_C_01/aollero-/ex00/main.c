/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aollero- <aollero-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/12 21:31:11 by aollero-          #+#    #+#             */
/*   Updated: 2020/02/12 21:37:52 by aollero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ft.c"
#include <stdio.h>
#include <unistd.h>

int		main(void)
{
	int nbr;

	nbr = 123;
	ft_ft(&nbr);
	write(1, &nbr, 1);
	printf("%d\n", nbr);
}
