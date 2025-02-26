/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akupesa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 12:16:35 by akupesa           #+#    #+#             */
/*   Updated: 2025/02/12 12:16:36 by akupesa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/cub3d.h"

char	**map_copy(t_cub *cub, char **map)
{
	int		i;
	int		j;
	char	**copy;

	i = 0;
	copy = NULL;
	copy = (char **)malloc(sizeof(char *) * (cub->map_h + 1));
	copy[cub->map_h] = NULL;
	while (i < cub->map_h)
	{
		copy[i] = (char *)malloc(sizeof(char ) * (cub->map_w + 1));
		j = 0;
		while (j < cub->map_w)
		{
			copy[i][j] = cub->map[i][j];
			j++;
		}
		i++;
	}
	return (copy);
}