NAME = push_swap

CC = cc
CFLAGS = -Wall -Wextra -Werror -Iincludes

SRC =	src/main.c \
		src/operations.c \
		src/parsing.c \
		src/sort_big.c \
		src/utils.c

OBJ = $(SRC:.c=.o)

INCLUDES = includes

all: $(NAME)

$(NAME): $(OBJ)
		$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

clean:
		rm -f $(OBJ)

fclean: clean
		rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re