#ifndef FDF_H
# define  FDF_H
# include "../libft/libft.h"
# include <math.h>

#define SIZE	200
#define ANGEL	0.523599

typedef struct	s_point
{
	int			x;
	int			y;
	int			z;
	//int			index;
}				t_point;

typedef struct	s_polygon
{
	t_point		*p1;
	t_point		*p2;
	t_point		*p3;
	t_point		*p4;
}				t_polygon;

typedef struct	s_settings
{
	float		scale;
	int			x_indent;
	int 		y_indent;
	float		theta;
	float		fi;
	float 		psi;
}				t_settings;

typedef struct	s_fdf
{
	void		*mlx_ptr;
	void		*win_ptr;
	t_settings	*set;
	t_list		*points;
	t_list		*polygons;
	int			z_buff[SIZE][SIZE];
	int 		frame[SIZE][SIZE];
}				t_fdf;

void 			read_file(char *file_name, t_fdf *fdf);
#endif //FDF_H
