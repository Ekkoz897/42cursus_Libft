NAME = libft.a

CC = gcc

CFLAGS = -Wall -Wextra -Werror -I .

RM = rm -f

SRC = $(wildcard *.c)

OBJ = $(SRC:.c=.o)

B_OBJ = $(B:.c=.o)

all:	$(NAME)

bonus:	$(B_OBJ)
			ar rcs $(NAME) $(B_OBJ)

$(NAME):	$(OBJ)
			ar rcs $(NAME) $(OBJ)

clean:
			$(RM) $(OBJ) $(B_OBJ)

fclean:	clean
			$(RM) $(NAME)

re:	fclean $(NAME)

so:
	$(CC) -nostartfiles -fPIC $(CFLAGS) $(SRC)
	gcc -nostartfiles -shared -o libft.so $(OBJ)