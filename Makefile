NAME = libft.a

SRC = *.c

OBJS = ${SRC:.c=.o}

CC = gcc

FLAGS = -Wall -Wextra -Werror -g

RM = rm -f

all: $(NAME)

$(NAME):
			${CC} -c ${FLAGS} ${SRC}
			ar crs ${NAME} ${OBJS}

clean:
			${RM} ${OBJS}

fclean: clean
			${RM} ${NAME}

re: fclean all

.PHONY: all, clean, fclean, re
