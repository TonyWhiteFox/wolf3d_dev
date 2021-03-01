#include "wolf3d.h"

void				init_structure_wolf(t_wolf *main_wolf)
{
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
	ft_printf("%i %s\n", ac, av[ac - 1]);
	init_structure_wolf(main_wolf);
}
int					main(int ac, char **av)
{
	t_wolf			*main_wolf;

	main_wolf = NULL;
	if (!(main_wolf = (t_wolf *)malloc(sizeof(t_wolf))))
		get_error_with_text("Memory error, try again latter", false);
	process_parameters(ac, av, main_wolf);

	return (0);
}