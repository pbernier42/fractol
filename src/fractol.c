/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbernier <pbernier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/03 18:07:31 by pbernier          #+#    #+#             */
/*   Updated: 2017/08/03 18:30:17 by pbernier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fractol.h"

void		my_error(int nb, t_err err)
{
		(nb == 0) ? ft_putstr("usage : ./fractol fractol_name\n") : NULL;
		if (nb == 1)
		{
			ft_putstr(err.name);
			ft_putstr(" isn't a fractol\n");
		}
		exit(0);
}

// int		fractol(char *)
// {
// 	int		i;
// 	char	*name;
//
// 	return(i);
// }

void	init(t_fra *e, char *name)
{
	int		i;

	e->mlx = mlx_init();
	e->win = mlx_new_window(e->mlx, X, Y, name);
	e->img = mlx_new_image(e->mlx, X, Y);
	e->data = mlx_get_data_addr(e->img, &i, &i, &i);
	e->pix = get_color(244, 131, 66, 0);
}

int		main(int ac, char **av)
{
	t_fra		e;
	t_err		err;

	err.name = av[1];
	if (ac != 2)
		my_error(0, err);
	fractol()
	init(&e, av[1]);
	mlx_put_image_to_window(e.mlx, e.win, e.img, 0, 0);
	mlx_hook(e.win, 2, 3, key, &e);
	mlx_loop(e.mlx);
	return (0);
}
