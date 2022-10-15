/* ************************************************************************** */
/*						                                                    */
/*                                                        :::      ::::::::   */
/*   set_shutdown.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsmereka <gsmereka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 13:50:40 by gsmereka          #+#    #+#             */
/*   Updated: 2022/10/11 13:50:46 by gsmereka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/data.h"

void	ft_free_grid(t_map *map)
{
	int		i;
	char	**grid;

	i = map->max_lines;
	while (i >= 0)
	{
		free(map->grid[i]);
		i--;
	}
	grid = map->grid;
	free(grid);
}

int	close_window(t_data *game)
{
	ft_set_shutdown(1, game, "");
	return (0);
}

void	free_images(t_sprites *sprites)
{
	int	i;

	i = 0;
	while (i < sprites->n_frames)
	{
		free(sprites->addr[i]);
		i++;
	}
	free(sprites->addr);
	free(sprites->img);
	free(sprites);
}