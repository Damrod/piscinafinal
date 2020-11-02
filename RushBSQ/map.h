/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetrova <r11tsa@yahoo.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 17:41:25 by vpetrova          #+#    #+#             */
/*   Updated: 2020/02/26 20:51:36 by vpetrova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAP_H
# define MAP_H

typedef struct		s_map
{
	unsigned int	height;
	unsigned int	width;
	char			empty_symbol;
	char			obstacle_symbol;
	char			solution_symbol;
	char			*positions;
}					t_map;

int					map_init(t_map *map, t_map send);

int					map_is_obstacle(t_map *map,
			unsigned int row, unsigned int column);

void				map_set_obstacle(t_map *map,
			unsigned int row, unsigned int column);

void				map_free(t_map *map);

#endif
