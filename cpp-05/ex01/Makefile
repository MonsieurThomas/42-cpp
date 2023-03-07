# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rthomas <rthomas@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/22 16:24:26 by romainthoma       #+#    #+#              #
#    Updated: 2023/01/20 15:44:43 by rthomas          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Bureaucrat

CPPFLAGS = -Wall -Wextra -Werror -std=c++98 #-g -fsanitize=address

SOURCES =	main.cpp \
			Bureaucrat.cpp \
			Form.cpp


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