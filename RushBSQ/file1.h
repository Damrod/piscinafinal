/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file1.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetrova <r11tsa@yahoo.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 23:49:34 by vpetrova          #+#    #+#             */
/*   Updated: 2020/02/26 21:25:34 by vpetrova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILE1_H
# define FILE1_H

# include "map.h"

int		read_header_and_first_line_part_2(t_map *map, char *ptr, t_map *send);

int		read_header_and_first_line(t_map *map);

void	close_file(void);

int		file_get_map_part_2(t_map *map);

int		file_get_map(const char *path, t_map *map);

#endif
