/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aollero- <aollero@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/15 17:30:46 by aollero-          #+#    #+#             */
/*   Updated: 2020/02/15 21:36:13 by aollero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void	r_error(void)
{
	write(1, "Error\n", 7);
}

int		main(int argc, char **argv)
{
	int		i;
	int		j;
	char	A[16];

	if (argc != 2)
	{
		i = 0;
		j = 0;
		r_error();
	}
	else
	{
		i = 0;
		j = 0;
		while (*argv[i] == ' ' || *argv[i] == '\t')
			i++;
		if (*argv[i] > '0' && *argv[i] < 59)
		{
			while (*argv[i] > '0' && *argv[i] < 59)
			{
				A[j] = *argv[i];
				i++;
				j++;
			}
		}
	}
		
	printf("numero de argumentos = %d , contenido de argv = %s , valor de mi contador = %d , valor de la tercera posicion de mi input = %c \n", argc, *argv, j, *argv[3]);
}
