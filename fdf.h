/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddratini <ddratini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 16:10:34 by ddratini          #+#    #+#             */
/*   Updated: 2020/03/07 21:39:30 by ddratini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FDF_H
# define FDF_H
# include "libft/libft.h"

//#include "minilibx_macos/mlx.h"
# include <mlx.h>

# include <fcntl.h>
# include <math.h>
# define BS 16000
# define WHITE 0xffffff
# define REVWHITE 0xff00ff //ffffff0x

# define RED 0xe80c0c
# define CYAN 0xffff
//CYAN 0x00ffff
# define PINK 0xff00ff
# define BLUE 0x0000ff
# define YELLOW 0xffff00
# define GRAY 0xfffff0

# define CLR 0x00FF00
# define WIN_W_X 500//2000//must be equal?
//# define WIN_H_Y 500;//600//1300
# define ISO_ANG 0.523599
# define PRL 1
# define ISO 3
# define ESC 53

# define ANGLE 0
# define Y_DOWN 126
# define Y_UP 125
# define X_DOWN 123
# define X_UP 124
//86 88 4 6
# define UP_Z 91//4  -7
# define DOWN_Z 84  //-9
# define UP_Y 89//44
# define DOWN_Y 92//
# define UP_X 86
# define DOWN_X 88

//8279  91 84 89 92


/*
** change the type of projection
** handle keys/mouse one by one
** color
** gradient
** hidden surfaces
*/

typedef	struct	s_coord
{
//	float 	x;
//	float 	y;
	int 	x;
	int 	y;
	int		z;
	int 	delta_x;
	int		delta_y;
	int 	x2;
	int		y2;
	int		z2;
}				t_coord;

typedef struct	s_fdf
{
	int		w;
	int		h;
	int		**z_matrix;
	int		fd;
	char 	*fname;
	int		zoom;
	int		color;
	int		shift_x;
	int		shift_y;
	float		z_sh;

	int     not_my_bus;
	void	*mlx_ptr;
	void	*win_ptr;
	int		projection;
	int		rot_y;
	int		rot_x;
	int		rot_z;
	void	*img_ptr;
	int		*img;
	int		bpp;
	int		endian;

	float     angle_y;
	float     angle_x;
	float     angle_z;
}				t_fdf;

void	draw_line(t_fdf *fdf);
int		ft_count_w(char *s, char c);
int		deal_mouse(int m, t_fdf *fdf);
int		mouse_press(int button, int x, int y, void *param);
int		ft_err();

//void		isometric(float *x, float *y, int z, t_fdf *);
void		isometric(int *x, int *y, int z, t_fdf *fdf);
void 		rot_y(float *x, float *y, float *z, float angle);
void 		rot_z(float *x, float *y, float *z, float angle);

int			deal_mouse(int m, t_fdf *fdf);
int			deal_key(int key, t_fdf *fdf);

void		draw_line(t_fdf *fdf);
//void		findpb(t_coord crd, float x1, float y1, t_fdf *fdf);
void		findpb(t_coord crd, int x1, int y1, t_fdf *fdf);

float		mod(float a);

int			mouse_press(int press, int x, int y, void *param);


//t_list			*valroom_fill1(t_list **br, char **roomcor, t_llrc *ok);
//int				val_cord(char **roomcor);
//char			**valrmc_s(char *line, t_llrc *ko);
//int				savemarg(t_llrc *lrc, int cm);
//int				stcheck(char **line, t_llrc *lrc, int cm);
//int				roomlinkblock(char **line, t_llrc *lrc);
//int				turninarr(t_llrc *llrc);
//int				ft_err(void);

char			**lines(char *buf);

char			**processmap(int fd);

int				ft_blank(void *img, int szline);

void	x_rotate(t_fdf *fdf, int *y, int *z);
void	y_rotate(t_fdf *fdf, int *x, int *z);
void	z_rotate(t_fdf *fdf, int *x, int *y);






#endif
