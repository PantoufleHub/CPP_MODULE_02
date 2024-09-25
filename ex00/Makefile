NAME		= Fixed
SRCS		= Main.cpp Fixed.cpp
FLAGS		= -g -Wall -Wextra -Werror -std=c++98
CC			= c++

all:
	@echo "all"
	$(CC) $(SRCS) $(FLAGS) -o $(NAME)

$(NAME):
	@echo "Name"
	$(CC) $(SRCS) $(FLAGS) -o $(NAME)

clean:
	@echo "clean"
	rm -rf *.dSYM *.o *test .vscode

fclean:	clean
	@echo "fclean"
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re 