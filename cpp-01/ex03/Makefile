# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: romainthomas <romainthomas@student.42.f    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/15 12:38:11 by romainthoma       #+#    #+#              #
#    Updated: 2023/01/09 10:30:05 by romainthoma      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Weapon

CFLAGS = -Wall -Wextra -Werror -std=c++98 #-g -fsanitize=address

SOURCES =	main.cpp \
			HumanA.cpp \
			HumanB.cpp \
			Weapon.cpp \

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