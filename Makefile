NAME	=	push_swap

CC		=	cc
FLAGS	=	-Wall -Wextra -Werror

RM		=	rm -rf

FOLDER	=	srcs/

FILES	=	checker.c \
			output.c \
			checker_utils.c \
			push_swap.c \
			ops_utils.c \
			push.c \
			radix_sort.c \
			reverse_rotate.c \
			rotate.c \
			swap.c \
			free.c

LIBFT	= ./libft/libft.a

SRC 	=	$(addprefix $(FOLDER), $(FILES))
OBJ 	=	$(SRC:.c=.o)

all: $(OBJ)
	@$(MAKE) -C ./libft
	@$(CC) $(CFLAGS) -o $(NAME) $(OBJ) $(LIBFT)

clean:
	@$(MAKE) -C ./libft clean
	@$(RM) $(OBJ)

fclean: clean
	@$(MAKE) -C ./libft fclean
	@$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
