# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yuboktae <yuboktae@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/27 18:23:52 by yuboktae          #+#    #+#              #
#    Updated: 2023/10/27 18:24:16 by yuboktae         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Harl

SRC	= main.cpp Harl.cpp

CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -g3

OBJ	= $(SRC:%.cpp=%.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJ)

%.o: %.cpp *.hpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re