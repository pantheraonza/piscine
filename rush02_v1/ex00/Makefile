# Nombre del ejecutable
NAME = rush-02

# Compilador y flags
CC = cc
CFLAGS = -Wall -Wextra -Werror

# Archivos fuente
SRCS = main.c convert_input.c parse_dictionary.c read_dictionary.c string_math.c string_mathtwo.c validate_input.c

# Objetos
OBJS = $(SRCS:.c=.o)

# Regla principal
all: $(NAME)

# Compilación final
$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

# Compilar .c -> .o
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Limpiar objetos
clean:
	rm -f $(OBJS)

# Limpiar todo
fclean: clean
	rm -f $(NAME)

# Recompilar
re: fclean all

# Evita conflictos con nombres de archivos
.PHONY: all clean fclean re sani
