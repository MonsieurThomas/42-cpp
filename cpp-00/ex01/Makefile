
NAME = Annuaire

CFLAGS = -Wall -Wextra -Werror -std=c++98

SOURCES =	main.cpp \
			contact.cpp \
			Phonebook.cpp \

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