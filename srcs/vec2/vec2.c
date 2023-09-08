/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec2.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imisumi <imisumi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 02:06:12 by ichiro            #+#    #+#             */
/*   Updated: 2023/09/08 16:49:51 by imisumi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/math.h"

t_vec2	vec2_add(t_vec2 a, t_vec2 b)
{
	return ((t_vec2){a.x + b.x, a.y + b.y});
}

t_vec2	vec2_addf(t_vec2 a, float b)
{
	return ((t_vec2){a.x + b, a.y + b});
}

t_vec2	vec2_sub(t_vec2 a, t_vec2 b)
{
	return ((t_vec2){a.x - b.x, a.y - b.y});
}

t_vec2	vec2_subf(t_vec2 a, float b)
{
	return ((t_vec2){a.x - b, a.y - b});
}

t_vec2	vec2_mul(t_vec2 a, t_vec2 b)
{
	return ((t_vec2){a.x * b.x, a.y * b.y});
}

t_vec2	vec2_mulf(t_vec2 a, float b)
{
	return ((t_vec2){a.x * b, a.y * b});
}

t_vec2	vec2_div(t_vec2 a, t_vec2 b)
{
	return ((t_vec2){a.x / b.x, a.y / b.y});
}

t_vec2	vec2_divf(t_vec2 a, float b)
{
	return ((t_vec2){a.x / b, a.y / b});
}