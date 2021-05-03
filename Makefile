# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pgomez-a <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/01/27 09:56:24 by pgomez-a          #+#    #+#              #
#    Updated: 2021/04/28 14:10:49 by pgomez-a         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS		= ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c ft_memmove.c		\
			  ft_memchr.c ft_memcmp.c ft_strlen.c ft_strlcpy.c ft_strlcat.c		\
			  ft_strchr.c ft_strrchr.c ft_strnstr.c ft_strncmp.c ft_atoi.c		\
			  ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c	\
			  ft_toupper.c ft_tolower.c ft_calloc.c ft_strdup.c ft_substr.c		\
			  ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c		\
			  ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c		\
			  ft_utoa.c ft_hextoa.c ft_charstr.c ft_pow.c get_next_line.c

FT_PRINTF	= ft_printf.c ./ft_printf/char_type.c ./ft_printf/hex_type.c ./ft_printf/numbers_width.c	\
			  ./ft_printf/int_type.c ./ft_printf/manage_format.c ./ft_printf/manage_precision.c			\
			  ./ft_printf/pct_type.c ./ft_printf/pointer_precision.c ./ft_printf/ptr_type.c				\
			  ./ft_printf/str_type.c ./ft_printf/uns_type.c

OBJS		= $(SRCS:.c=.o)

OB_PRINTF	= $(FT_PRINTF:.c=.o)

BON			= ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c

BON_OB		= $(BON:.c=.o)

.PHONY:	all clean fclean re bonus normi normi_h

NAME	= libft.a

CFLAGS	= -Wall -Werror -Wextra

RM		= rm -f

$(NAME):	$(OBJS) $(OB_PRINTF)
			@ar rc $(NAME) $(OBJS) $(OB_PRINTF)

all:		$(NAME)

bonus:		$(OBJS) $(OB_PRINTF) $(BON_OB)
			@ar rc $(NAME) $(OBJS) $(OB_PRINTF) $(BON_OB)

clean:
			@$(RM) $(OBJS) $(OB_PRINTF) $(BON_OB)

fclean:		clean
			@$(RM) $(NAME)

re:			fclean all

normi:
			@norminette $(SRCS) $(OB_PRINTF) $(BON)

normi_h:
			@norminette libft.h
