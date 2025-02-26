# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: akupesa <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/06 13:27:06 by akupesa           #+#    #+#              #
#    Updated: 2025/02/26 16:03:18 by akupesa          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = cub3d
CC = cc
CFLAGS = -Wall -Werror -Wextra

SRCS = 	srcs/all_frees.c \
	srcs/cub_utils_0.c \
	srcs/flood_fill_validator.c \
	srcs/get_next_line.c \
	srcs/main.c \
	srcs/map_reader.c \
	srcs/map.c \
	srcs/validator_args.c

LIBFT = libft/libft.a
LIBRARIES = -I./includes -L./libft ./$(LIBFT)

OBJ = $(SRCS:.c=.o)

all: $(MINILIBX) $(LIBFT) $(NAME)

$(MINILIBX):
	make -C $$((ls | cat | grep minilib))

$(LIBFT):
	make -C libft

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ) $(LIBRARIES)
clean:
	make clean -C libft
	rm -f $(OBJ)

fclean: clean
	make fclean -C libft
	rm -f $(OBJ) $(NAME)

re: fclean all

.PHONY: all clean fclean re
