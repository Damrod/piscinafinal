/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aollero- <aollero@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/07 01:26:52 by aollero-          #+#    #+#             */
/*   Updated: 2020/02/18 20:26:54 by aollero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_strlen.c"
#include <unistd.h>
#include <string.h>
#include <stdio.h>

int		main(void)
{
	char *str;
	char a[] = "123456789012";

	str = a;
	printf("%d", ft_strlen(str));
}
