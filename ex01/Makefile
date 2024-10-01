NAME		= Fixed
SRCS		= main.cpp Fixed.cpp
FLAGS		= -Wall -Wextra -Werror -std=c++98
CC			= c++

all:
	$(CC) $(SRCS) $(FLAGS) -o $(NAME)

$(NAME):
	$(CC) $(SRCS) $(FLAGS) -o $(NAME)

clean:
	rm -rf *.dSYM *.o *test .vscode

fclean:	clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re 