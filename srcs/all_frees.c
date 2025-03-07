/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   all_frees.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akupesa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 10:03:52 by akupesa           #+#    #+#             */
/*   Updated: 2025/02/12 10:04:22 by akupesa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../includes/cub3d.h"

void	simple_free(t_cub *cub, char *str)
{
	if (str)
		ft_putstr_fd(str, 1);
	free (cub);
	exit (0);
}

void	just_free(t_cub *cub)
{
	free(cub);
	exit(0);
}
