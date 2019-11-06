/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_image.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncolomer <ncolomer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 00:05:58 by ncolomer          #+#    #+#             */
/*   Updated: 2019/11/06 12:50:09 by ncolomer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "engine.h"

int
	draw_vertical_line_img(t_window *window, t_pos *start,
							int length, int color)
{
	int	i;

	i = 0;
	while (i < length)
	{
		if (start->x < window->size.x && start->y < window->size.y)
			ft_memcpy(window->image.ptr +
				(4 * (int)window->size.x * ((int)start->y + i))
				+ ((int)start->x * 4), &color, sizeof(int));
		i++;
	}
	return (1);
}
