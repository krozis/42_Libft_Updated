NAME 		= 	libft.a
CC			= 	gcc
DMK			=	mkdir
H_DIR		=	includes
S_DIR		=	src
O_DIR		=	obj
SRCS		=	ft_atoi.c\
				ft_base_to_int_dec.c\
				ft_bin_to_int_dec.c\
				ft_bzero.c\
				ft_calloc.c\
				ft_hex_to_int_dec.c\
				ft_isalnum.c\
				ft_isalpha.c\
				ft_isascii.c\
				ft_isbinary.c\
				ft_ishexa.c\
				ft_isdigit.c\
				ft_isoctal.c\
				ft_isprint.c\
				ft_isspace.c\
				ft_itoa.c\
				ft_memchr.c\
				ft_memcmp.c\
				ft_memcpy.c\
				ft_memmove.c\
				ft_memset.c\
				ft_oct_to_int_dec.c\
				ft_power.c\
				ft_putchar_fd.c\
				ft_putendl_fd.c\
				ft_putnbr_fd.c\
				ft_putstr_fd.c\
				ft_split.c\
				ft_strchr.c\
				ft_strdup.c\
				ft_striteri.c\
				ft_strjoin.c\
				ft_strlcat.c\
				ft_strlcpy.c\
				ft_strlen.c\
				ft_strmapi.c\
				ft_strncmp.c\
				ft_strnstr.c\
				ft_strrchr.c\
				ft_strtrim.c\
				ft_substr.c\
				ft_tolower.c\
				ft_toupper.c

B_SRCS		=	ft_lstnew.c\
				ft_lstadd_front.c\
				ft_lstsize.c\
				ft_lstlast.c\
				ft_lstadd_back.c\
				ft_lstdelone.c\
				ft_lstclear.c\
				ft_lstiter.c\
				ft_lstmap.c

OBJS		=	$(SRCS:%.c=$(O_DIR)/%.o)
OBJBONUS	=	$(B_SRCS:%.c=$(O_DIR)/%.o)
INCLUDES	=	-I$(H_DIR)
CFLAGS		=	-Wall -Werror -Wextra
RM			=	rm -rf
AR			=	ar rc

$(O_DIR)/%.o:	$(S_DIR)/%.c
		$(CC) $(CFLAGS) $(INCLUDES) -o $@ -c $<

$(NAME):	$(OBJS)
			$(AR) $(NAME) $(OBJS)

bonus:	$(NAME) $(OBJBONUS)
		$(AR) $(NAME) $(OBJBONUS)

all:	$(NAME)
		

clean:
		$(RM) $(OBJS) $(OBJBONUS)

fclean:	clean
		$(RM) $(NAME)

re:	fclean all