# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ezanette <ezanette@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/17 12:52:07 by ezanette          #+#    #+#              #
#    Updated: 2024/09/17 16:01:14 by ezanette         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Compiler
CC = gcc

# Compiler flags
CFLAGS = -Wall -Wextra -Werror
MFLAGS = -L./mlx -lmlx_Linux -lXext -lX11 -lm -lbsd

# Directories
LIBFTDIR = ./libft
MLXDIR = ./mlx

# Source files
SRCS = floodfill_check.c map_control.c save_position.c error.c main.c get_str.c window.c p_move.c utils.c check_char.c enemy.c e_move.c e_random.c e_random_move.c
OBJS = $(SRCS:%.c=%.o)

# Executable name
NAME = so_long

all: $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -I$(MLXDIR) -I$(LIBFTDIR) -c $< -o $@

$(NAME): $(OBJS)
	make -C $(MLXDIR)
	make -C $(LIBFTDIR)
	$(CC) $(OBJS) -L$(LIBFTDIR) -lft $(MFLAGS) -o $(NAME)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re