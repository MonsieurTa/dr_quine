NAME = Sully
CC=gcc
FLAGS= -Wall -Werror -Wextra
SRC = Sully.s

OBJ = $(SRC:.s=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ld --dynamic-linker=/lib64/ld-linux-x86-64.so.2 -o $(NAME) -lc $(OBJ)

%.o: %.s
	nasm -felf64 $<

clean:
	/bin/rm -rf $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all

.PHONY:	clean fclean re test
