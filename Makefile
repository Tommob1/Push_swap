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
