#include "../includes/cub3d.h"

int	ft_test_file(char *argv)
{
	int		fd;
	char	test[1];

	fd = open(argv, O_RDONLY);
	if (!read(fd, test, 1))
	{
		ft_printf("Error\nEmpty file\n");
		return (0);
	}
	close(fd);
	return (1);
}

void	bzero_struct(t_map *map)
{
	int	i;

	i = 0;
	map->map_tab = NULL;
	map->map_data = NULL;
	map->width_map = 0;
	map->height_map = 0;
	map->p_pos_x = 0;
	map->p_pos_y = 0;
	map->p_direction = '\0';
	while (i < 3)
	{
		map->rgb_floor[i] = -1;
		map->rgb_sky[i] = -1;
		i++;
	}
	map->line = NULL;
	map->map_line = NULL;
	map->north = NULL;
	map->south = NULL;
	map->east = NULL;
	map->west = NULL;
}

int	main(int ac, char **av)
{
	t_map	map;
	int		fd;

	bzero_struct(&map);
	if (ac != 2)
		parse_error(&map, "Error\nOne argument required\n");
	if (!ft_test_file(av[1]))
		return (1);
	fd = open(av[1], O_RDONLY); // segfault si dossier
	if (fd <= 0)
	{
		ft_printf("Error\nFailed to open file\n");
		return (37);
	}
	if (!ft_parse_map(&map, fd))
	{
		free_double_array(map.map_tab);
		return (38);
	}
	ft_init_game(&map);
	return (0);
}
