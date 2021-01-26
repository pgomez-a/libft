NAME	= libft.a

CC		= gcc

CFLAGS	= -Wall -Werror -Wextra

RM		= rm -f

${NAME}:	OBJS
			ar rc ${NAME} *.o

all:		${NAME}

OBJS:
			${CC} ${CFLAGS} -c *.c

clean:
			${RM} *.o

fclean:		clean
			${RM} ${NAME}

re:			fclean all
