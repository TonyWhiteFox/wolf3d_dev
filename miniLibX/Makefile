# ------------  PROJECT  ----------------------------------------------------- #
NAME	=		libmlx.a

# ------------  DIRECTORIES  ------------------------------------------------- #
SRC_DIR	=		src
HDR_DIR	=		includes
OBJ_DIR	=		obj


# ------------  SOURCE FILES  ------------------------------------------------ #
SRC_FLS	=       mlx_shaders.c \
				mlx_xpm.c \
				mlx_int_str_to_wordtab.c

SRM_FLS	=		mlx_new_window.m \
				mlx_init_loop.m \
				mlx_new_image.m \

HEADERS =		mlx_int.h

# ------------  FILEPATHS  --------------------------------------------------- #
SRCS	=		$(addprefix $(SRC_DIR)/, $(SRC_FLS))
OBJS	=		$(addprefix $(OBJ_DIR)/, $(SRC_FLS:%.c=%.o))
OBJM	=		$(addprefix $(OBJ_DIR)/, $(SRM_FLS:%.m=%.o))

# ------------  FLAGS  ------------------------------------------------------- #
CC		=		cc -O2
RM		=		rm -rf
IFLGS	=		-I ./
LFLGS	=		-framework OpenGL -framework AppKit -lm

# ------------  COLORS  ------------------------------------------------------ #
GREEN = \033[0;32m
RED = \033[0;31m
PURPLE = \033[0;35m
CYAN = \033[0;36m
RESET = \033[0m
YELLOW = \033[0;33m
BLUE = \033[0;34m
CHANGE = $(GREEN)
TAB = "\	\	"
FTAB = "\	\	\	"

# ------------  RULES  ------------------------------------------------------- #
.PHONY: all clean fclean re FORCE

all: $(OBJ_DIR) $(NAME)

FORCE: ;

$(OBJS): $(OBJ_DIR)/%.o: $(SRC_DIR)/%.c $(HEADERS)
	@echo "$(CHANGE)∰$(RESET)\c"
	@$(CC) -c -o $@ $< $(IFLGS)

$(OBJM): $(OBJ_DIR)/%.o: $(SRC_DIR)/%.m $(HEADERS)
	@echo "$(CHANGE)∰$(RESET)\c"
	@$(CC) -c -o $@ $< $(IFLGS)

$(OBJ_DIR):
	@mkdir -p $(OBJ_DIR)


$(NAME): $(OBJS) $(OBJM)
	@echo "\n\n$(NAME):$(TAB)$(YELLOW)object files$(TAB)$(GREEN)were created.$(RESET)"
	@ar rcs $(NAME) $(OBJS) $(OBJM)
	@ranlib $(NAME)
	@echo "$(NAME):$(TAB)$(YELLOW)$(NAME)$(TAB)$(GREEN)was  created.$(RESET)\n"

clean:
	@rm -f $(OBJC) $(OBJM) *~
	@echo "\n$(NAME):$(TAB)$(YELLOW)object files$(TAB)$(RED)were deleted.$(RESET)"
	@rm -Rf obj
	@echo "$(NAME):$(TAB)$(YELLOW)object folders$(TAB)$(RED)were deleted.$(RESET)"

fclean: clean
	@rm -f $(NAME)
	@echo "$(NAME):$(TAB)$(YELLOW)$(NAME)$(TAB)$(RED)was  deleted.$(RESET)"

re: fclean all
