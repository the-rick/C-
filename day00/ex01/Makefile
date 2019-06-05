CC = clang++
FLAGS = -Wall -Werror -Wextra
NAME = phonebook.cpp
OUT = phonebook

all:
	$(CC) $(FLAGS) $(NAME) -o $(OUT)

re: fclean all

clean:
	rm -rf phonebook

fclean:clean

.PHONY: all clean fclean re