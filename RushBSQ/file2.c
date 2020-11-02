/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetrova <r11tsa@yahoo.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/26 21:15:06 by vpetrova          #+#    #+#             */
/*   Updated: 2020/02/26 21:25:46 by vpetrova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "file.h"
#include "file2.h"

#include <stdlib.h>

int		read_obstacles(t_map *map, unsigned int row, char *ptr)
{
	unsigned int	column;

	column = 0;
	while (*(ptr + column) != '\0')
	{
		if (column >= map->width)
			return (1);
		if (*(ptr + column) == map->obstacle_symbol)
		{
			map_set_obstacle(map, row, column);
		}
		else if (*(ptr + column) != map->empty_symbol)
		{
			return (1);
		}
		column++;
	}
	return (column != map->width);
}

int		read_additional_line(t_map *map, unsigned int row)
{
	char			*ptr;

	if (0 != read_file_line_known_length(&ptr, map->width + 1) ||
		(NULL == ptr))
		return (1);
	return (read_obstacles(map, row, ptr));
}
