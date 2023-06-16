# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: romainthomas <romainthomas@student.42.f    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/20 14:10:07 by romainthoma       #+#    #+#              #
#    Updated: 2023/04/20 19:49:06 by romainthoma      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = btc

CPPFLAGS = -Wall -Wextra -Werror -std=c++98 #-g -fsanitize=address

SOURCES =	main.cpp \
			BitcoinExchange.cpp


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