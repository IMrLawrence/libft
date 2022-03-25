NAME	:=	libft.a

SRCS	:=	ft_isalpha.c \
			ft_isdigit.c \
			ft_isascii.c \
			ft_isalnum.c \
			ft_isprint.c \
			ft_toupper.c \
			ft_tolower.c \
			ft_bzero.c	 \
			ft_memset.c  \
			ft_memcpy.c
OBJS	:=	$(SRCS:.c=.o)

CC		:=	cc
CFLAGS	?=	-Wall \
			-Wextra \
			-Werror

LDFLAGS	?=

RM		:=	rm -f
AR		:=	ar rc

all		: 	$(NAME)

$(NAME)	:	$(OBJS)
	$(AR) $(NAME) $(OBJS)

$(OBJS)	:	$(SRCS)
	$(CC) -c $(CFLAGS) $^

clean	:
	$(RM) $(OBJS)

fclean	:	clean
	$(RM) $(NAME)

re		:	fclean all

.PHONY	:	all clean fclean re
