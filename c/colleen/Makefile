NAME = Colleen
CC=gcc
FLAGS= -Wall -Werror -Wextra
SRC = main.c

OBJ = $(SRC:.s=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) -o $(NAME) $(OBJ)

%.o: %.s
	$(CC) $(FLAGS) -I. -o $@ $<

clean:
	/bin/rm -rf $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all

.PHONY:	clean fclean re test
