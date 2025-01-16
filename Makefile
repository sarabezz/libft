NAME = libft.a

CC = gcc

CW = -Wall -Wextra -Werror

SRC = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
      ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c \
      ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c \
      ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c \
      ft_atoi.c

OBJ = $(SRC.c = .o)

all: $(NAME)

$(NAME): $(OBJ)
	@ar rcs $(NAME) $(OBJ)
	@echo "$(NAME) creado con éxito"

%.o: %.c
	@$(CC) $(CW) -c $< -o $@

clean:
	@rm -f $(OBJ)
	@echo "Archivos .o eliminados"

fclean: clean
	@rm -f $(NAME)
	@echo "$(NAME) eliminado"

re: fclean all

.PHONY: all clean fclean re