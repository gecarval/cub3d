/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_items_validator.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akupesa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 10:05:27 by akupesa           #+#    #+#             */
/*   Updated: 2025/02/27 10:05:30 by akupesa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/cub3d.h"

int	player_validator(t_cub *cub)
{
	int	x;
	int	y;
	int	player_counter;

	y = -1;
	player_counter = 0;
	while (++y < cub->map_h)
	{
		x = -1;
		while (++x < cub->map_w)
		{
			if (cub->map[y][x] == 'N')
				player_counter++;
		}
		
	}
	if (player_counter != 1)
		return (FALSE);
	return (TRUE);
}