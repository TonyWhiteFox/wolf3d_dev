#include "wolf3d.h"

void				init_mlx(t_mlx *mlx, t_wolf *main_wolf)
{
	mlx->mlx_ptr = mlx_init();
	mlx->win_ptr = mlx_new_window(mlx->mlx_ptr, main_wolf->win_size_x,
			main_wolf->win_size_y, main_wolf->map_name);
	mlx->img_ptr = mlx_new_image(mlx->mlx_ptr, main_wolf->win_size_x,
			main_wolf->win_size_y);
	mlx->img_adr = mlx_get_data_addr(mlx->img_ptr, &mlx->bpp, &mlx->stride,
			&mlx->endian);
	mlx->stop = false;
	mlx->bpp /= 8;
	mlx->stop = false;
}

int			say_good_buy(t_wolf *main_wolf)
{
	exit(0);
	main_wolf += 0;
	return (0);
}

int		mouse_move_hook(int x, int y, t_wolf *main_wolf)
{
	// if (x - wolf->temp_mouse > 0)
	// 	wolf->player->angle += 0.01;
	// else
	// 	wolf->player->angle -= 0.01;
	// wolf->temp_mouse = x;
	y += 0;
	x += 0;
	main_wolf += 0;
	return (0);
}

int			key_press(int key, t_wolf *main_wolf)
{
	if (key == 53)
		say_good_buy(main_wolf);
	// wolf->temp_x = cos(wolf->player->angle) * wolf->speed;
	// wolf->temp_y = sin(wolf->player->angle) * wolf->speed;
	if (key == 13) //w
	{
		// if ((wolf->chart->map[
		// 					((int)(wolf->player->x + wolf->temp_x)/wolf->chart->rect_w) + (int)(wolf->player->y + tmpy)/wolf->chart->rect_w * wolf->chart->w
		// 						]) == 0)
		// 			{
		// 				wolf->player->x += wolf->temp_x;
		// 				wolf->player->y += wolf->temp_y;
		// 			}
	}
	if (key == 0) //a
	{
		// if ((wolf->chart->map[
		// 					((int)(wolf->player->x - wolf->temp_x)/wolf->chart->rect_w) + (int)(wolf->player->y - wolf->temp_y)/wolf->chart->rect_w * wolf->chart->w
		// 						]) == 0)
		// 			{
		// 				wolf->player->x -= wolf->temp_x;
		// 				wolf->player->y -= wolf->temp_y;
		// 			}
	}
	if (key == 1) //s
	{
		// if ((wolf->chart->map[
		// 					((int)(wolf->player->x - wolf->temp_y)/wolf->chart->rect_w) + (int)(wolf->player->y + wolf->temp_x)/wolf->chart->rect_w * wolf->chart->w
		// 						]) == 0)
		// 			{
		// 				wolf->player->x -= wolf->temp_y;
		// 				wolf->player->y += wolf->temp_x;
		// 			}
	}
	if (key == 2) //d
	{
		// if ((wolf->chart->map[
		// 					((int)(wolf->player->x + wolf->temp_y)/wolf->chart->rect_w) + (int)(wolf->player->y - wolf->temp_x)/wolf->chart->rect_w * wolf->chart->w
		// 						]) == 0)
		// 			{
		// 				wolf->player->x += wolf->temp_y;
		// 				wolf->player->y -= wolf->temp_x;
		// 			}
	}
	ft_printf("%i  ", key);
	return (0);
}


int			run_game(t_wolf *main_wolf)
{
	main_wolf += 0;
		// while (SDL_PollEvent(&sdl.e) != 0)
		// {
		// 	if (sdl.e.type == SDL_QUIT)
		// 		sdl.run = false;
		// 	if (sdl.e.type == SDL_MOUSEMOTION)
		// 	{
		// 		if (sdl.e.motion.x - x > 0 || sdl.e.motion.x == W_W - 1)
		// 			player.angle += 0.01;
		// 		else
		// 			player.angle -= 0.01;
		// 		x = sdl.e.motion.x;
		// 	}
		// 	if (sdl.e.type == SDL_KEYDOWN)
		// 	{
		// 		if (sdl.e.key.keysym.sym == SDLK_ESCAPE)
		// 			sdl.run = false;
		// 		float wolf->temp_x = cos(player.angle) * spd;
		// 		float tmpy = sin(player.angle) * spd;
		// 		if (sdl.e.key.keysym.sym == SDLK_UP || sdl.e.key.keysym.sym == SDLK_w)
		// 		{
		// 			if ((map.map[
		// 					((int)(player.x + tmpx)/map.rect_w) + (int)(player.y + tmpy)/map.rect_w * map.w
		// 						]) == 0)
		// 			{
		// 				player.x += tmpx;
		// 				player.y += tmpy;
		// 			}
		// 		}
		// 		if (sdl.e.key.keysym.sym == SDLK_DOWN || sdl.e.key.keysym.sym == SDLK_s)
		// 		{
		// 			if ((map.map[
		// 					((int)(player.x - tmpx)/map.rect_w) + (int)(player.y - tmpy)/map.rect_w * map.w
		// 						]) == 0)
		// 			{
		// 				player.x -= tmpx;
		// 				player.y -= tmpy;
		// 			}
		// 		}
		// 		if (sdl.e.key.keysym.sym == SDLK_RIGHT || sdl.e.key.keysym.sym == SDLK_d)
		// 		{
		// 			if ((map.map[
		// 					((int)(player.x - tmpy)/map.rect_w) + (int)(player.y + tmpx)/map.rect_w * map.w
		// 						]) == 0)
		// 			{
		// 				player.x -= tmpy;
		// 				player.y += tmpx;
		// 			}
		// 		}
		// 		if (sdl.e.key.keysym.sym == SDLK_LEFT || sdl.e.key.keysym.sym == SDLK_a)
		// 		{
		// 			if ((map.map[
		// 					((int)(player.x + tmpy)/map.rect_w) + (int)(player.y - tmpx)/map.rect_w * map.w
		// 						]) == 0)
		// 			{
		// 				player.x += tmpy;
		// 				player.y -= tmpx;
		// 			}
		// 		}
		// 	}
		// }
		// SDL_LockTexture(sdl.win_texture, NULL, &sdl.bytes, &sdl.pitch);
		// map_rect_w(&map);
		// draw_skybox(&sdl, &player);
		// draw_walls(&map, &sdl, &player);
		// draw_map(&map, &sdl);
		// draw_fov(&sdl, &player);
		// draw_rect(&sdl, player.x - 3, player.y - 3, 6, RGB(255, 255, 255));
		// SDL_UnlockTexture(sdl.win_texture);
		// SDL_RenderCopy(sdl.rend, sdl.win_texture, NULL, NULL);
		// SDL_RenderPresent(sdl.rend);
	return(0);
}

void				create_hooks_ans_start(t_wolf *main_wolf)
{
	// mlx_loop_hook(main_wolf->mlx->mlx_ptr, run_game, main_wolf);
	mlx_hook(main_wolf->mlx->win_ptr, 2, 2, key_press, main_wolf);
	mlx_hook(main_wolf->mlx->win_ptr, 6, 6, mouse_move_hook, main_wolf);
	mlx_hook(main_wolf->mlx->win_ptr, 17, 17, say_good_buy, main_wolf);
	mlx_loop(main_wolf->mlx->mlx_ptr);
}

void				init_magick_number_first_block(t_wolf *main_wolf)
{
	main_wolf->win_size_x = 1600;
	main_wolf->win_size_y = 1024;
}

void				init_player_start_params(t_player *player)
{
	player->position_x = 100;
	player->position_y = 100;
	player->position_z = 1;
	player->stay_size = 5;
	player->sit_size = 3;
	player->widht = 2;
	player->standart_speed = 3;
	player->sit_speed = 1;
	player->run_speed = 5;
	player->angle_around = 0;
	player->angle_horizon = 90;
	player->angle_horizon_low_limit = 20;
	player->angle_horizon_hight_limit = 170;
}

void				init_structure_wolf(t_wolf *main_wolf)
{
	if (!(main_wolf->mlx = (t_mlx *)malloc(sizeof(t_mlx))))
		get_error_with_text("Memory error, try again latter", false);
	if (!(main_wolf->player = (t_player *)malloc(sizeof(t_player))))
		get_error_with_text("Memory error, try again latter", false);
	init_player_start_params(main_wolf->player);
	init_magick_number_first_block(main_wolf);
	init_mlx(main_wolf->mlx, main_wolf);
	main_wolf += 0;
}

void				get_error_with_text(char *message, bool memory_alowed)
{
	if (memory_alowed)
		ft_printf("%s\n", message);
	else
		ft_putendl(message);
	exit(0);
}

void				process_parameters(int ac, char **av, t_wolf *main_wolf)
{
	if (ac == 1)
		get_error_with_text("For start game please get path to file", true);
	if (ac > 2)
		get_error_with_text("Please use only one parameter", true);
	main_wolf->map_name = ft_strdup(av[ac - 1]);
	ft_printf("%i %s\n", ac, av[ac - 1]);
	init_structure_wolf(main_wolf);
}

void				test_init_map(t_wolf *wolf_main)
{
	wolf_main += 0;
}

int					main(int ac, char **av)
{
	t_wolf			*main_wolf;

	main_wolf = NULL;
	if (!(main_wolf = (t_wolf *)malloc(sizeof(t_wolf))))
		get_error_with_text("Memory error, try again latter", false);
	process_parameters(ac, av, main_wolf);
	create_hooks_ans_start(main_wolf);
	return (0);
}