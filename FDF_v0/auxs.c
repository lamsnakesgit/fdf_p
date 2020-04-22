/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aux.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddratini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/07 21:36:02 by ddratini          #+#    #+#             */
/*   Updated: 2020/03/12 21:09:50 by ddratini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

int			ft_blank(void *img, int szline)
{
	int i;
	int *mg;

	i = 0;
	mg = (int *)img;
	while (i < szline)
	{
		if (mg[i])
			mg[i] = 0;
		++i;
	}
	return (0);
}

void		ft_color(t_fdf *fdf, t_coord *crd)
{
	crd->z = fdf->z_matrix[(int)crd->y][(int)crd->x] * fdf->z_sh;
	crd->z2 = fdf->z_matrix[(int)crd->y2][(int)crd->x2] * fdf->z_sh;
	fdf->z = fdf->z_matrix[(int)crd->y][(int)crd->x] * fdf->z_sh;
	fdf->z2 = fdf->z_matrix[(int)crd->y2][(int)crd->x2] * fdf->z_sh;
	fdf->color = (crd->z || crd->z2) > 0 ? RED : WHITE;
}

void		ft_zoomrt(t_fdf *fdf, t_coord *crd)
{
	crd->x *= (int)(fdf->zoom);
	crd->y *= (int)(fdf->zoom);
	crd->x2 *= fdf->zoom;
	crd->y2 *= fdf->zoom;
	x_rotate(fdf, &crd->y, &crd->z);
	x_rotate(fdf, &crd->y2, &crd->z2);
	y_rotate(fdf, &crd->x, &crd->z);
	y_rotate(fdf, &crd->x2, &crd->z2);
	z_rotate(fdf, &crd->x, &crd->y);
	z_rotate(fdf, &crd->x2, &crd->y2);
	if (fdf->projection == ISO)
	{
		isometric(&crd->x, &crd->y, crd->z);
		isometric(&crd->x2, &crd->y2, crd->z2);
	}
}

void		ft_modify(t_fdf *fdf, t_coord *crd)
{
	ft_color(fdf, crd);
	ft_zoomrt(fdf, crd);
	crd->x += fdf->shift_x;
	crd->y += fdf->shift_y;
	crd->x2 += fdf->shift_x;
	crd->y2 += fdf->shift_y;
	fdf->dy = mod(crd->y2 - crd->y);
	fdf->dx = mod(crd->x2 - crd->x);
	fdf->sy = crd->y < crd->y2 ? 1 : -1;
	fdf->sx = crd->x < crd->x2 ? 1 : -1;
	fdf->er = fdf->dx - fdf->dy;
}
