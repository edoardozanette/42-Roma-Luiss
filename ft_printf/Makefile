NAME = libftprintf.a

SRCS = ft_ptrprint.c ft_print_hex.c ft_put_u_nbr.c ft_putnbr.c ft_putstr.c ft_putchar.c ft_printf.c

OUT = $(SRCS:.c=.o)

CC = gcc

CFLAGS = -Wall -Werror -Wextra
 
.c.o:
		@${CC} ${CFLAGS} -g -c $< -o ${<:.c=.o}

$(NAME): $(OUT)
		@ar rcs $(NAME) $(OUT)

all:	$(NAME)

clean:
		@rm -f $(OUT) $(BOUT)

fclean: clean
		@rm -f $(NAME)

re: 	fclean all

r:
	@make -s
	@gcc main.c libftprintf.a
	@./a.out
