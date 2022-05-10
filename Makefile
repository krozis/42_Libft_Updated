# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: krozis <krozis@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/19 20:20:34 by krozis            #+#    #+#              #
#    Updated: 2022/05/10 13:45:53 by krozis           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#Name
NAME 		= 	libft.a

#Commands
CC			= 	gcc
DMK			=	mkdir -p
RM			=	rm -rf
AR			=	ar rc

#Compilation flags
INCLUDES	=	-I$(H_DIR)
CFLAGS		=	-Wall -Werror -Wextra

#Directories
H_DIR		=	includes
S_DIR		=	src
O_DIR		=	obj

#Source files
SRCS		=	00_is_something/00_00.c\
				00_is_something/00_01.c\
				00_is_something/00_02.c\
				01_get_len/01_00.c\
				02_numbers/02_00.c\
				02_numbers/02_01.c\
				03_bases/03_00.c\
				03_bases/03_01.c\
				04_put_something/04_00.c\
				05_strings/05_00.c\
				05_strings/05_01.c\
				05_strings/05_02.c\
				05_strings/05_03.c\
				05_strings/05_04.c\
				06_memory/06_00.c\
				06_memory/06_01.c\
				07_chained_lists/07_00.c\
				07_chained_lists/07_01.c\
				08_ft_printf/08_00.c\
				08_ft_printf/08_01.c\
				08_ft_printf/08_02.c\
				08_ft_printf/08_03.c\
				08_ft_printf/08_04.c\
				08_ft_printf/08_05.c\
				08_ft_printf/08_06.c\
				09_gnl/09_00.c\

OBJS		=	$(SRCS:%.c=$(O_DIR)/%.o)

$(O_DIR)/%.o:	$(S_DIR)/%.c
		$(CC) $(CFLAGS) $(INCLUDES) -o $@ -c $<

$(NAME):	$(OBJS)
			$(AR) $(NAME) $(OBJS)

all:	$(NAME)
		

clean:
		$(RM) $(OBJS) $(OBJBONUS)

fclean:	clean
		$(RM) $(NAME)

re:	fclean all