NAME = libftprintf.a

CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f
AR = ar rcs

SRC = ft_print_char.c ft_print_str.c ft_print_id.c ft_print_ptr.c \
	  ft_print_unsigned.c ft_print_hex.c ft_printf.c ft_itoa.c

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@$(AR) $(NAME) $(OBJ)
	@echo "Biblioteca $(NAME) criada com sucesso!"

%.o: %.c
	@$(CC) $(CFLAGS) -c $< -o $@
	@echo "Compilado: $<"

clean:
	@$(RM) $(OBJ)
	@echo "Arquivos .o removidos com sucesso!"

fclean: clean
	@$(RM) $(NAME)
	@echo "Biblioteca $(NAME) removida com sucesso!"

re: fclean all

help:
	@echo "Usage:"
	@echo "  make        - Build the project"
	@echo "  make clean  - Remove object files"
	@echo "  make fclean - Remove all build files"
	@echo "  make re     - Rebuild everything"
	@echo "  make help   - Show this help message"

.PHONY: all clean fclean re help