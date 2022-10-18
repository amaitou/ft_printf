
NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
CFILES = ft_printf.c ft_putchar.c ft_putstr.c ft_printhex.c ft_putsigned.c ft_putunsigned.c
SOURCES = $(CFILES:.c=.o)

%.o: %.c
	$(CC) $(CFLAGS) -c $?

all: $(NAME)

$(NAME): $(SOURCES)
	$(AR) rcs $@ $?

clean:
	rm -f $(SOURCES)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
