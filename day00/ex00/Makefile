# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nmandlan <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/06/03 14:22:24 by nmandlan          #+#    #+#              #
#    Updated: 2019/06/03 15:09:17 by nmandlan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = clang++
FLAGS = -Wall -Werror -Wextra
NAME = megaphone.cpp
OUT = megaphone

all:
	$(CC) $(FLAGS) $(NAME) -o $(OUT)

re: fclean all

clean:
	rm -rf megaphone

fclean:clean

.PHONY: all clean fclean re
