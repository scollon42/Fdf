/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   color.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scollon <scollon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/06 07:26:04 by scollon           #+#    #+#             */
/*   Updated: 2016/05/16 09:34:30 by scollon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

static int		set_index(t_env *env, int h)
{
	int		percent;
	int		index;

	percent = ((env->max_h - h) * 100) / env->step_h;
	index = (percent * env->pal.nb_col) / 100;
	index = (env->pal.nb_col - index);
	return (index > 0 ? index - 1 : 0);
}

int				*color(t_env *env, int h)
{
	int			pch;
	int			*color;

	if (!(color = (int *)malloc(sizeof(int) * 3)))
		error(env, 8);
	pch = set_index(env, h);
	color[0] = (env->pal.p[env->pc][pch] % 256);
	color[1] = ((env->pal.p[env->pc][pch] >> 8) % 256);
	color[2] = ((env->pal.p[env->pc][pch] >> 16) % 256);
	return (color);
}
