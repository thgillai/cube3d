/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_handler2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thgillai <thgillai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 13:45:17 by thgillai          #+#    #+#             */
/*   Updated: 2021/09/17 15:38:15 by thgillai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/cub3d.h"

void	verifmapline(char *line)
{
	int i;
	
	i = 0;
	while (line[i])
	{
		if (line[i] != '0' && line[i] != '1' && line[i] != '2' && line[i] != 'N'
		&& line[i] != 'S' && line[i] != 'W' && line[i] != 'E' && line[i] != ' ' )
			exit_error("Invalid map");
		i++;
	}
	if (line[i - 1] != '1')
		exit_error("Invalid map");
}

void	checkifhole(t_data *data)
{
	int i;
	int j;

	i = 0;
	while (i < data->nb_line)
	{
		j = 0;
		while (data->map[i][j])
		{
			if (data->map[i][j] == '0')
			{
				printf("up: %c\n", data->map[i + 1][j]);
				printf("down: %c\n", data->map[i - 1][j]);
				printf("right: %c\n", data->map[i][j + 1]);
				printf("left: %c\n", data->map[i][j - 1]);
				if ((data->map[i][j - 1] == ' ') || (data->map[i][j - 1] == '\n')
					|| (data->map[i][j + 1] == ' ' || data->map[i][j + 1] == '\n')
					|| (data->map[i - 1][j] == ' ' || data->map[i - 1][j] == '\n')
					|| (data->map[i + 1][j] == ' ' || data->map[i + 1][j] == '\n'))
					exit_error("Hole in map");
			}
			j++;
		}
		i++;
	}
}