
SRCS		= *.c

OBJS		= ${SRCS:.c=.o}

NAME		= libft.a

CC		= gcc

CFLAGS		= -Wall -Werror -Wextra

RM		= rm -f

.c.o:
		@${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
		@ar rc ${NAME} ${OBJS}

all:		${NAME}

clean:
		@${RM} ${OBJS}

fclean:		clean
		@${RM} ${NAME}

re:		fclean all
