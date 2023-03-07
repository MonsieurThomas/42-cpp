# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: romainthomas <romainthomas@student.42.f    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/15 12:17:02 by romainthoma       #+#    #+#              #
#    Updated: 2023/01/09 10:29:57 by romainthoma      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Bonjour

CFLAGS = -Wall -Wextra -Werror -std=c++98

SOURCES =	main.cpp \

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