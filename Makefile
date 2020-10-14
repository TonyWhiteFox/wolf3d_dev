# ------------  PROJECT  ----------------------------------------------------- #
#ASM = asm
#DISASM = dasm
#COREWAR = corewar
WOLF3D = wolf3d

# ------------  DIRECTORIES  ------------------------------------------------- #

OBJ_DIR	=		obj

# ------------  LIBFT  ------------------------------------------------------- #

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

# ------------  SOURCE FILES  ------------------------------------------------ #

#ASM_MAKE =      asm.mk
#DASM_MAKE =     dasm.mk
#CW_MAKE =       corewar.mk
WOLF_MAKE =		wolf3d.mk

# ------------  FILEPATHS  --------------------------------------------------- #

# ------------  FLAGS  ------------------------------------------------------- #
CC		=		gcc
RM		=		rm -rf
CFLGS	=		-Wall -Werror -Wextra -g
IFLGS	=		-I $(HDR_DIR) -I $(LHS_DIR)
LFLGS	=		-L $(LFT_DIR) -lft
DFLGS	=		-MMD -MP
DEBUG	=		-g -pg -fsanitize=address

# ------------  RULES  ------------------------------------------------------- #
#.PHONY: all clean fclean re $(ASM) $(DISASM) $(COREWAR)
.PHONY: all clean fclean re $(WOLF3D)

#all: $(ASM) $(DISASM) $(COREWAR)
all: $(WOLF3D)
	@echo "$(CHANGE)\n\nAll Done!\n$(RESET)"

FORCE: ;

#$(ASM): FORCE
#	make -f $(ASM_MAKE)

#$(DISASM): FORCE
#	make -f $(DASM_MAKE)

#$(COREWAR): FORCE
#	make -f $(CW_MAKE)

$(WOLF3D): FORCE
	@make -f $(WOLF_MAKE)

clean:
#	$(MAKE) -f $(ASM_MAKE) clean
#	$(MAKE) -f $(DASM_MAKE) clean
#	$(MAKE) -f $(CW_MAKE) clean
	@$(MAKE) -f $(WOLF_MAKE) clean
	@$(RM) $(OBJ_DIR)
	@echo "$(RED)\n\nAll Objects was Deleted!\n$(RESET)"

fclean:
#	$(MAKE) -f $(ASM_MAKE) fclean
#	$(MAKE) -f $(DASM_MAKE) fclean
#	$(MAKE) -f $(CW_MAKE) fclean
	@$(MAKE) -f $(WOLF_MAKE) fclean
	@$(RM) $(OBJ_DIR)
	@echo "$(RED)\n\nAll Objects and Executors files was Deleted!\n$(RESET)"

re: fclean all
