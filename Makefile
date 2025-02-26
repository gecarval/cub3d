# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: akupesa <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/06 13:27:06 by akupesa           #+#    #+#              #
#    Updated: 2025/02/06 13:27:52 by akupesa          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = cub3d
CC = cc
CFLAGS = -Wall -Werror -Wextra

SRCS = 	srcs/all_frees.c \
	srcs/flood_fill_validator.c \
	srcs/get_next_line.c \
	srcs/map_reader.c \
	srcs/map.c \
	srcs/validator_args.c

OBJ = $(SRCS:.c=.o)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ)

all: $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(OBJ) $(NAME)

re: fclean all

.PHONY: all clean fclean re