/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   struct.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyung-ki <kyung-ki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 11:47:11 by kyung-ki            #+#    #+#           */
/*   Updated: 2025/02/17 19:33:42 by kyung-ki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRUCT_H
# define STRUCT_H

typedef struct  s_map
{
    // display pointer
    void    *mlx;
    void    *mlx_win;

    
    char    *north;
    char    *south;
    char    *east;
    char    *west;

    // map data
    char    **map_tab;
    char    **map_data;
    int     width_map;
    int     height_map;

    // player data
    int     p_pos_x;
    int     p_pos_y;
    char    p_direction;

    // color data
    int     rgb_floor[3];
    int     rgb_sky[3];

    // image pointer
    void    *north_wall;
    void    *south_wall;
    void    *east_wall;
    void    *west_wall;

    // parsing variables
    char    *line;
    char    *map_line;

}   t_map;

#endif