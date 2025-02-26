/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akupesa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 13:12:50 by akupesa           #+#    #+#             */
/*   Updated: 2025/02/25 13:12:51 by akupesa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/cub3d.h"

int	main(int ac, char **av)
{
	(void)ac;
	(void)av;
	t_cub	*cub;

	cub = malloc(sizeof(t_cub));
	if (cub == NULL)
		return (FALSE);
	cub->mlx = mlx_init();
	cub->window = mlx_new_window(cub->mlx, cub->map_w, cub->map_h, "cub3d");
	return (TRUE);
}
