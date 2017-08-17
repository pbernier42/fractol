/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbernier <pbernier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/03 17:56:44 by pbernier          #+#    #+#             */
/*   Updated: 2017/08/17 15:54:16 by pbernier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRACTOL_H
# define FRACTOL_H

# define X 800
# define Y 700
# define ESC 53
# define SPA 49
# define PLU 69
# define MIN 78
# define KEY_R 15
# define KEY_C 8
# define KEY_A 0
# define KEY_Z 6
# define KEY_T 17
# define KEY_Q 12
# define KEY_LEFT 123
# define KEY_RIGHT 124
# define KEY_UP 126
# define KEY_DOWN 125
# define KEY_CLEAR 71
# define KEY_M 46
# define KEY_N 45
# define KEY_V 9
# define KEY_RET 36
# define KEY_TAB 48
# define KEY_1 83
# define KEY_2 84
# define KEY_3 85
# define KEY_4 86
# define KEY_5 87
# define KEY_6 88
# define KEY_7 89
# define KEY_8 91
# define KEY_9 92


# define MOL_UP 5
# define MOL_DOWN 4
# define L_CLICK 1

# define C_LEFT 48
# define C_A 36
# define C_LR 1
# define C_LF 2

# define WHITE 0xFFFFFF

# include "../libft/includes/libft.h"
# include "../minilibx_macos/mlx.h"
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <stdlib.h>
# include <stdio.h>
# include <math.h>

typedef struct		s_julia
{
	int				x;
	int				y;
	long double		i;
	long double		imax;
	long double		x1;
	long double		x2;
	long double		y1;
	long double		y2;
	long double		zoom_x;
	long double		zoom_y;
	long double		c_r;
	long double		c_i;
	long double		z_r;
	long double		z_i;
}					t_julia;

typedef struct		s_mendel
{
	int				x;
	int				y;
	long double		i;
	long double		imax;
	long double		x1;
	long double		x2;
	long double		y1;
	long double		y2;
	long double		zoom_x;
	long double		zoom_y;
	long double		c_r;
	long double		c_i;
	long double		z_r;
	long double		z_i;
}					t_mendel;

typedef struct		s_color
{
	unsigned char	blue;
	unsigned char	green;
	unsigned char	red;
	unsigned char	alpha;
}					t_color;

typedef struct		s_fra
{
	char			*name;
	void			*mlx;
	void			*win;
	void			*img;
	char			*data;
	int				alpha;
	int				mul_imax;
	int				color;
	int				*rgb;
	char			*s_alpha;
	char			*s_imax;
	char			*s_color;
	int				s_on;
	int				c_on;
	int				c_adj;
	long double		ms_x;
	long double		ms_y;
	long double		zoom;
	int				lock;
	int				key_save;
	t_color			pix;
	t_mendel		m;
	t_julia			j;
}					t_fra;

void				restart_key(int key, t_fra *e);

void				conv_img(int x, int y, t_fra *e);

t_color				get_color(int r, int g, int b, int a);
void				all_black(t_fra *e);
int					*hue_color(int i);

void				julia(t_fra *e);
void				init_mlx_julia(t_fra *e);
void				init_julia(t_fra *e);
void				reset_julia(t_fra *e);
void				reset_julia_mini(t_fra *e);
int					key_julia(int key, t_fra *e);
int					key_mouse_julia(int key, int x, int y, t_fra *e);
int					motion_mouse_julia(int x, int y, t_fra *e);
int					lock_mouse_julia(int key, t_fra *e);

void				mandelbrot(t_fra *e);
void				init_mlx_mandelbrot(t_fra *e);
void				init_mandelbrot(t_fra *e);
void				reset_mandelbrot(t_fra *e);
void				reset_mandelbrot_mini(t_fra *e);
void				str_string_mandelbrot(t_fra *e);
int					key_mandelbrot(int key, t_fra *e);
int					key_mouse_mandelbrot(int key, int x, int y, t_fra *e);

void				burningship(t_fra *e);
void				sp_burningship(t_fra *e);

void				celtic_mandelbrot(t_fra *e);
void				sp_celtic_mandelbrot(t_fra *e);

void				mandelbar(t_fra *e);
void 				sp_mandelbar(t_fra *e);

void				celtic_mandelbar(t_fra *e);

void				cubic_burningship(t_fra *e);
void				sp_cubic_burningship(t_fra *e);

void				perpendicular_mandelbrot(t_fra *e);
void				sp_perpendicular_mandelbrot(t_fra *e);

void				heart_mandelbrot(t_fra *e);

#endif
