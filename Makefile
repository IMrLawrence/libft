NAME	:=	libft.a

SRCS	:=	ft_isalpha.c	\
			ft_isdigit.c	\
			ft_isascii.c	\
			ft_isalnum.c	\
			ft_isprint.c	\
			ft_toupper.c	\
			ft_tolower.c	\
			ft_bzero.c		\
			ft_memset.c		\
			ft_memcpy.c		\
			ft_memmove.c	\
			ft_atoi.c		\
			ft_memchr.c		\
			ft_memcmp.c		\
			ft_calloc.c		\
			ft_strlen.c		\
			ft_strlcpy.c	\
			ft_strlcat.c	\
			ft_strchr.c		\
			ft_strncmp.c	\
			ft_strrchr.c	\
			ft_strnstr.c	\
			ft_strdup.c		\
			ft_substr.c		\
			ft_strjoin.c	\
			ft_strtrim.c	\
			ft_putchar_fd.c	\
			ft_putstr_fd.c	\
			ft_putendl_fd.c	\
			ft_putnbr_fd.c	\
			ft_strmapi.c	\
			ft_striteri.c
OBJS	:=	$(SRCS:.c=.o)

CC		:=	cc
CFLAGS	?=	-Wall \
			-Wextra \
			-Werror

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
