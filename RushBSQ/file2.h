/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file2.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetrova <r11tsa@yahoo.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/26 21:14:45 by vpetrova          #+#    #+#             */
/*   Updated: 2020/02/26 21:18:05 by vpetrova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILE2_H
# define FILE2_H

# include "map.h"

int		read_obstacles(t_map *map, unsigned int row, char *ptr);

int		read_additional_line(t_map *map, unsigned int row);

#endif
