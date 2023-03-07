# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: romainthomas <romainthomas@student.42.f    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/15 12:38:11 by romainthoma       #+#    #+#              #
#    Updated: 2022/12/21 19:24:12 by romainthoma      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ClapTrap

CFLAGS = -Wall -Wextra -Werror -std=c++98

SOURCES =	main.cpp \
			ClapTrap.cpp \

OBJS = $(SOURCES:.cpp=.o)

all:		$(NAME)

$(NAME):	$(OBJS)
			clang++ $(CFLAGS) $(OBJS) -o $(NAME)

clean:
			rm -f $(OBJS)

fclean:		clean
			rm -f $(NAME)

norme:
			norminette $(SRCS)

re:			fclean all

.PHONY:		re clean fclean all