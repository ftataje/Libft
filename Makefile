NAME = libft.a

SRC = *.c

SRC_BONUS = *.c

OBJS = ${SRC:.c=.o}

OBJS_BONUS = ${SRC_BONUS:.c=.o}

CC = gcc

FLAGS = -Wall -Wextra -Werror -g

RM = rm -f

all: ${NAME}

${NAME}:
			${CC} -c ${FLAGS} ${SRC}
			ar crs ${NAME} ${OBJS}

bonus: ${OBJS_BONUS}
		ar crs ${NAME} $^

clean:
			${RM} ${OBJS} ${OBJS_BONUS}

fclean: clean
			${RM} ${NAME}

re: fclean all

.PHONY: all, clean, bonus, fclean, re
