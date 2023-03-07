# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rthomas <rthomas@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/13 18:48:10 by romainthoma       #+#    #+#              #
#    Updated: 2023/01/13 15:15:38 by rthomas          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = ZombieHorde

CFLAGS = -Wall -Wextra -Werror -std=c++98

SOURCES =	main.cpp \
			zombieHorde.cpp \
			Zombie.cpp \

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