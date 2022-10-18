
NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
CFILES = ft_printf.c ft_putchar.c ft_putstr.c ft_printhex.c ft_putsigned.c ft_putunsigned.c
SOURCES = $(CFILES:.c=.o)

%.o: %.c
	@echo "compiling \033[1;32m$?\033[0m" 
	@$(CC) $(CFLAGS) -c $?

all: $(NAME)

$(NAME): $(SOURCES)
	@echo "archiving $@"
	@$(AR) rcs $@ $?

clean:
	@echo "deleting *.c"
	@rm -f $(SOURCES)

fclean: clean
	@echo "deleting libftprintf.a"
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
