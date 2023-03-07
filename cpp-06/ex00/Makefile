# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rthomas <rthomas@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/22 16:24:26 by romainthoma       #+#    #+#              #
#    Updated: 2023/01/21 14:45:00 by rthomas          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Conversion

CPPFLAGS = -Wall -Wextra -Werror -std=c++98

SOURCES =	main.cpp \
			whatIs.cpp


OBJS = $(SOURCES:.cpp=.o)

all:		$(NAME)

$(NAME):	$(OBJS)
			clang++ $(CPPFLAGS) $(OBJS) -o $(NAME)

clean:
			rm -f $(OBJS)

fclean:		clean
			rm -f $(NAME)

norme:
			norminette $(SRCS)

re:			fclean all

.PHONY:		re clean fclean all