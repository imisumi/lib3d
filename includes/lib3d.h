/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib3d.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imisumi-wsl <imisumi-wsl@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 02:06:12 by ichiro            #+#    #+#             */
/*   Updated: 2023/09/14 15:18:51 by imisumi-wsl      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEST_H
# define TEST_H

# include <math.h>

typedef struct s_vec2
{
	float		x;
	float		y;
}				t_vec2;

typedef struct s_vec3
{
	float		x;
	float		y;
	float		z;
}				t_vec3;

typedef struct s_vec4
{
	float		x;
	float		y;
	float		z;
	float		w;
}				t_vec4;

typedef struct s_ray
{
	t_vec3		origin;
	t_vec3		direction;
}				t_ray;

typedef struct s_mat4
{
	float		m[4][4];
}				t_mat4;

typedef struct s_quaternion
{
	float		x;
	float		y;
	float		z;
	float		w;
}				t_quat;

/* ************************************************************************** */
/*                                    vec2                                    */
/* ************************************************************************** */

t_vec2		vec2_new(float x, float y);
t_vec2		vec2_add(t_vec2 a, t_vec2 b);
t_vec2		vec2_addf(t_vec2 a, float b);
t_vec2		vec2_sub(t_vec2 a, t_vec2 b);
t_vec2		vec2_subf(t_vec2 a, float b);
t_vec2		vec2_mul(t_vec2 a, t_vec2 b);
t_vec2		vec2_mulf(t_vec2 a, float b);
t_vec2		vec2_div(t_vec2 a, t_vec2 b);
t_vec2		vec2_divf(t_vec2 a, float b);

float		vec2_dot(t_vec2 a, t_vec2 b);
float		vec2_length(t_vec2 a);
float		vec2_length2(t_vec2 a);
t_vec2		vec2_normalize(t_vec2 a);
t_vec2		vec2_lerp(t_vec2 a, t_vec2 b, float t);
t_vec2		vec2_reflect(t_vec2 a, t_vec2 b);
t_vec2		vec2_rotate(t_vec2 a, float angle);
t_vec2		vec2_rotate_around(t_vec2 a, t_vec2 b, float angle);
t_vec2		vec2_min(t_vec2 a, t_vec2 b);
t_vec2		vec2_max(t_vec2 a, t_vec2 b);
t_vec2		vec2_clamp(t_vec2 a, t_vec2 min, t_vec2 max);
t_vec2		vec2_clampf(t_vec2 a, float min, float max);
t_vec2		vec2_smoothstep(t_vec2 a, t_vec2 b, float t);
t_vec2		vec2_smoothstepf(t_vec2 a, float b, float t);

/* ************************************************************************** */
/*                                    vec3                                    */
/* ************************************************************************** */

t_vec3		vec3_add(t_vec3 a, t_vec3 b);
t_vec3		vec3_sub(t_vec3 a, t_vec3 b);
t_vec3		vec3_subf(t_vec3 a, float b);
t_vec3		vec3_mul(t_vec3 a, t_vec3 b);
t_vec3		vec3_mulf(t_vec3 a, float b);
t_vec3		vec3_div(t_vec3 a, t_vec3 b);
t_vec3		vec3_divf(t_vec3 a, float b);
float		vec3_dot(t_vec3 a, t_vec3 b);
t_vec3		vec3_cross(t_vec3 a, t_vec3 b);
t_vec3		vec3_new(float x, float y, float z);
t_vec3		vec3_normalize(t_vec3 v);
float		vec3_length(t_vec3 v);

/* ************************************************************************** */
/*                                    vec4                                    */
/* ************************************************************************** */

t_vec4		vec4_new(float x, float y, float z, float w);
float	vec4_length(t_vec4 v);
t_vec4	vec4_add(t_vec4 v1, t_vec4 v2);
t_vec4	vec4_divf(t_vec4 v, float scalar);
t_vec4	vec4_normalize(t_vec4 v);
t_vec4	vec4_mul(t_vec4 v1, t_vec4 v2);
t_vec4	vec4_mulf(t_vec4 v, float scalar);
t_vec4 vec4_clamp(t_vec4 v, float min, float max);

/* ************************************************************************** */
/*                                    mat4                                    */
/* ************************************************************************** */
t_mat4	fill_mat4(t_mat4 m, float f);
t_mat4	create_mat4(float f);
t_mat4	mat4_identity(void);
t_mat4	mat4_inverse(t_mat4 m);

t_mat4	mat4_perspective(float fovy, float aspect, float nearZ, float farZ);
t_mat4	mat4_look_at(t_vec3 eye, t_vec3 center, t_vec3 up);

/* ************************************************************************** */
/*                                    quat                                    */
/* ************************************************************************** */

t_quat	quat_new(float x, float y, float z, float w);
t_quat	quat_angle_axis(float angle, t_vec3 axis);
t_quat	quat_cross(t_quat q1, t_quat q2);
float	t_quat_length(t_quat q);
t_quat	quat_normalize(t_quat q);


t_vec3	quat_rotate(t_quat q, t_vec3 v);



float fov_radians(float fov);

t_vec4 mat4_mul_vec4(t_mat4 matrix, t_vec4 vector);

#endif
