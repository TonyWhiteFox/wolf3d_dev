
#ifndef _WOLF3D_H
# define _WOLF3D_H
# include "libft.h"
# include "mlx.h"
# define CL_SILENCE_DEPRECATION
# ifdef __APPLE__
#  include <OpenCL/opencl.h>
# else
#  include <CL/cl.h>
# endif

typedef struct			s_mlx
{
	void				*mlx_ptr;
	void				*win_ptr;
	void				*img_ptr;
	void				*img_adr;
	int					bpp;
	int					stride;
	int					endian;
	bool				stop;
}						t_mlx;

typedef struct			s_player
{
	int					position_x;
	int					position_y;
	int					position_z;
	int					stay_size;
	int					sit_size;
	int					widht;
	int					standart_speed;
	int					sit_speed;
	int					run_speed;
	int					angle_around;
	int					angle_horizon;
	int					angle_horizon_low_limit;
	int					angle_horizon_hight_limit;
	int					viewing_angle;
}						t_player;

typedef struct			s_objectlist
{
	int					**wall_coords; //первый уровень - номер стены, [i][0] - точка 1 по Х, [i][1] - точка 2 по Х, [i][2] - высота тесктыры и т.д. опционально 
	struct s_objectlist	*next;
}						t_objectlist;

typedef struct			s_wolf
{
	int					*cl;
	char				*map_name;
	int					**test_map;
	int					space_coefficient;
	t_mlx				*mlx;
	t_player			*player;
	t_objectlist		*object;
	int					win_size_x;
	int					win_size_y;
}						t_wolf;

void					get_error_with_text(char *message, bool memory_alowed);


#endif
