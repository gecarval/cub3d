/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_reader.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akupesa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 16:41:58 by akupesa           #+#    #+#             */
/*   Updated: 2025/02/21 16:42:00 by akupesa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/cub3d.h"


int	read_file(t_cub *cub, char *map)
{
	int		i;
	char	**temp;

	if (!map)
		return (FALSE);
	temp = (char **) malloc(sizeof(char *) * (cub->map_h + 1));
	if (!temp)
		return (FALSE);
	temp[cub->map_h] = NULL;
	i = 0;
	while (i < cub->map_h - 1)
	{
		temp[i] = cub->map[i];
		i++;
	}
	temp[i] = map;
	if (cub->map)
		free(cub->map);
	cub->map = temp;
	return (TRUE);
}
int	load_map(t_cub *cub, const char *file_name)
{
	int		fd;
	char	*map;

	fd = open(file_name, O_RDONLY);
	if (fd < 0)
		simple_free(cub, "Error!\nInvalid Path or File Not Found.\n");
	cub->map_h = 0;
	cub->map = NULL;
	while (1)
	{
		map = get_next_line(fd);
		if (!map)
			break;
		if (!read_file(cub, map))
			break;
	}
	free(map);
	close(fd);
	if (!is_map_empty(cub))
		simple_free(cub, "Error!\nEmpty Map.\n");
	return (1);
}