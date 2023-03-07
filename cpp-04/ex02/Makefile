# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: romainthomas <romainthomas@student.42.f    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/22 16:24:26 by romainthoma       #+#    #+#              #
#    Updated: 2022/12/29 14:16:11 by romainthoma      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Polymorphisme

CFLAGS = -Wall -Wextra -Werror -std=c++98 #-g -fsanitize=address

SOURCES =	./sources/main.cpp \
			./sources/Animal.cpp \
			./sources/Dog.cpp \
			./sources/Cat.cpp \
			./sources/Brain.cpp \
			./sources/WrongAnimal.cpp \

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