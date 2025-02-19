#include "cub3d.h"

void	free_double_array(char **str)
{
	int i;

	i = 0;
	while (str[i])
	{
		free(str[i]);
		i++;
	}
	free(str);
}

int close_game(t_map *map)
{
    free_double_array(map->map_tab);
	free_double_array(map->map_data);
	mlx_destroy_window(map->mlx, map->mlx_win);
	mlx_destroy_display(map->mlx);
    free(map->mlx);
    exit (0);
}
