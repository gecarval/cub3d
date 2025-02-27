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

OBJ = $(SRCS:.c=.o)

LIBFT_DIR = ./libft
LIBFT = $(LIBFT_DIR)/libft.a

MINILIBX_DIR = ./minilibx-linux
MINILIBX = $(MINILIBX_DIR)/libmlx.a

MLX_FLAGS = $(MINILIBX_DIR) -lX11 -lXext -lm

INCLUDES = -I./includes -I$(LIBFT_DIR) -I$(MINILIBX_DIR)

all: $(LIBFT) $(MINILIBX) $(NAME)

$(LIBFT):
	make -C $(LIBFT_DIR)

$(MINILIBX):
	make -C $(MINILIBX_DIR)

$(NAME): $(OBJ) $(LIBFT) $(MINILIBX)
	$(CC) $(CFLAGS) $(INCLUDES) -o $(NAME) $(OBJ) $(LIBFT) $(MINILIBX) $(MLX_FLAGS)
clean:
	make -C $(LIBFT_DIR) clean
	make -C $(MINILIBX_DIR) clean
	rm -f $(OBJ)

fclean: clean
	make -C $(LIBFT) fclean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
