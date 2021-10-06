/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   data2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thgillai <thgillai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 13:32:09 by thgillai          #+#    #+#             */
/*   Updated: 2021/10/06 18:15:49 by thgillai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/cub3d.h"

void	north(char *line, t_data *data)
{
	int		img_width;
	int		img_height;

	data->no = ft_strtrim(line, " ");
	data->imgno = mlx_xpm_file_to_image(data->mlx, data->no, &img_width, &img_height);
	if (data->imgno == NULL)
		exit_error("Invalid NO path");
	data->map_argnb += 1;
}

void	south(char *line, t_data *data)
{
	int		img_width;
	int		img_height;

	data->so = ft_strtrim(line, " ");
	data->imgso = mlx_xpm_file_to_image(data->mlx, data->so, &img_width, &img_height);
	if (data->imgso == NULL)
		exit_error("Invalid SO path");
	data->map_argnb += 1;
}

void	west(char *line, t_data *data)
{
	int		img_width;
	int		img_height;

	data->we = ft_strtrim(line, " ");
	data->imgwe = mlx_xpm_file_to_image(data->mlx, data->we, &img_width, &img_height);
	if (data->imgwe == NULL)
		exit_error("Invalid WE path");
	data->map_argnb += 1;
}

void	east(char *line, t_data *data)
{
	int		img_width;
	int		img_height;

	data->ea = ft_strtrim(line, " ");
	data->imgea = mlx_xpm_file_to_image(data->mlx, data->ea, &img_width, &img_height);
	if (data->imgea == NULL)
		exit_error("Invalid EA path");
	data->map_argnb += 1;
}
