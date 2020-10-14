# ------------  PROJECT  ----------------------------------------------------- #
NAME	=		wolf3d

# ------------  DIRECTORIES  ------------------------------------------------- #
SRC_DIR	=		src/$(NAME)
HDR_DIR	=		includes/$(NAME)
OBJ_DIR	=		obj
OBJ_DIR_NAME =	obj/$(NAME)

# ------------  MLX  --------------------------------------------------------- #
MLX		=		libmlx.a
MLX_DIR	=		miniLibX
MHS_DIR	=		$(MLX_DIR)

# ------------  LIBFT  ------------------------------------------------------- #
LFT		=		libft.a
LFT_DIR	=		libft
LHS_DIR	=		$(LFT_DIR)/includes

# ------------  SOURCE FILES  ------------------------------------------------ #
SRC_FLS	=       main.c\

HEADERS =		$(HDR_DIR)/wolf3d.h

# ------------  FILEPATHS  --------------------------------------------------- #
SRCS	=		$(addprefix $(SRC_DIR)/, $(SRC_FLS))
OBJS	=		$(addprefix $(OBJ_DIR_NAME)/, $(SRC_FLS:%.c=%.o))
DEPS	=		$(OBJS:.o=.d)

# ------------  FLAGS  ------------------------------------------------------- #
CC		=		gcc
RM		=		rm -rf
CFLGS	=		-Wall -Werror -Wextra -g
IFLGS	=		-I $(HDR_DIR) -I $(LHS_DIR) -I $(MHS_DIR)
LFLGS	=		-L $(LFT_DIR) -lft -L $(MLX_DIR) -l mlx -framework OpenCL \
				-framework OpenGL -framework AppKit -lm
DFLGS	=		-MMD -MP
DEBUG	=		-g -pg -fsanitize=address

# ------------  COLORS  ------------------------------------------------------ #
GREEN = \033[0;32m
RED = \033[0;31m
PURPLE = \033[0;35m
CYAN = \033[0;36m
RESET = \033[0m
YELLOW = \033[0;33m
BLUE = \033[0;34m
CHANGE = $(RED)
TAB = "\	\	"
FTAB = "\	\	\	"

# ------------  RULES  ------------------------------------------------------- #
.PHONY: all clean fclean re FORCE

all: $(OBJ_DIR) $(OBJ_DIR_NAME) $(NAME)

FORCE: ;

$(MLX_DIR)/$(MLX): FORCE
	@$(MAKE) -C $(MLX_DIR)

$(LFT_DIR)/$(LFT): FORCE
	@$(MAKE) -C $(LFT_DIR)

-include $(DEPS)

$(OBJS): $(OBJ_DIR_NAME)/%.o: $(SRC_DIR)/%.c $(HEADERS)
	@echo "$(CHANGE)∰$(RESET)\c"
	@$(CC) $(CFLGS) $(DFLGS) -c -o $@ $< $(IFLGS)


$(OBJ_DIR):
	@mkdir -p $(OBJ_DIR)

$(OBJ_DIR_NAME): $(OBJ_DIR)
	@mkdir -p $(OBJ_DIR_NAME)

$(NAME): $(LFT_DIR)/$(LFT) $(MLX_DIR)/$(MLX) $(OBJS)
	@echo "\n\n$(NAME):$(FTAB)$(YELLOW)object files$(TAB)$(GREEN)were created.$(RESET)"
	@$(CC) -o $(NAME) $(OBJS) $(LFLGS)
	@echo "$(NAME):$(FTAB)$(YELLOW)$(NAME)$(FTAB)$(GREEN)was  created.$(RESET)\n"

clean:
	@$(MAKE) -C $(LFT_DIR) clean
	@$(MAKE) -C $(MLX_DIR) clean
	@rm -f $(OBJS)
	@echo "\n$(NAME):$(FTAB)$(YELLOW)object files$(TAB)$(RED)were deleted.$(RESET)"
	@$(RM) $(OBJ_DIR_NAME)
	@echo "$(NAME):$(FTAB)$(YELLOW)object folders$(TAB)$(RED)were deleted.$(RESET)"

fclean:
	@$(MAKE) -C $(LFT_DIR) fclean
	@$(MAKE) -C $(MLX_DIR) fclean
	@rm -f $(OBJS)
	@echo "\n$(NAME):$(FTAB)$(YELLOW)object files$(TAB)$(RED)were deleted.$(RESET)"
	@$(RM) $(OBJ_DIR_NAME)
	@echo "$(NAME):$(FTAB)$(YELLOW)object folders$(TAB)$(RED)were deleted.$(RESET)"
	@$(RM) $(NAME)
	@echo "$(NAME):$(FTAB)$(YELLOW)$(NAME)$(FTAB)$(RED)was  deleted.$(RESET)"


re: fclean all
