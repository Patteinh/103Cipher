##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## Makefile
##

NAME	=	103cipher

CC	= gcc -g

RM	= rm -f

SRCS	=	src/main.c				\
			src/check_help.c		\
			src/set_cipher.c		\
			src/set_matrix.c		\
			src/create_matrix.c		\
			src/display_matrix.c	\
			src/decrypted.c			\

OBJS	= $(SRCS:.c=.o)

LIB = -L ./lib/my/ -lmy

CFLAGS = -I ./include/ -W -Wall -Wextra -lm

all: $(NAME)

$(NAME):	$(OBJS)
		make -C ./lib/my/
		$(CC) $(OBJS) -o $(NAME) $(CFLAGS) $(LIB)
		rm lib/libmy.a

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)
	make fclean -C ./lib/my/

re: fclean all

.PHONY: all clean fclean re
