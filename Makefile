# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: btomlins <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/20 12:21:22 by btomlins          #+#    #+#              #
#    Updated: 2024/02/20 16:07:17 by btomlins         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

COMP = gcc -Wall -Werror -Wextra

NAME = push_swap.a

SRC = 

OBJ = 

RM = rm -f

all: $(NAME)

%.o: %.c
	$(COMP) -o $@ -c $<

$(NAME):	$(OBJ)
	$(COMP) -c $(SRC) -I./
	ar rc $(NAME) $(OBJ)

clean:
	$(RM) $(OBJ)

fclean:	clean
	$(RM) $(NAME)

re:	fclean all
