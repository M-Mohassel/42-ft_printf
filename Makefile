NAME = libftprintf.a
src = \
ft_putchar.c	ft_putnbr.c		ft_printf.c

obj = $(src:.c=.o)

CC = cc
CFLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME): $(obj)
		$(AR) -r $@ $?

%.o: %.c
		$(CC) -c $(CFLAGS) $?

clean:
		rm -f $(obj)

fclean: clean
		rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re