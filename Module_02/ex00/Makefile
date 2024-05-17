# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: meserghi <meserghi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/15 17:42:05 by meserghi          #+#    #+#              #
#    Updated: 2024/05/15 17:43:09 by meserghi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FILE = main.cpp Fixed.cpp

OBJ = ${FILE:.cpp=.o}

FLAGS = -std=c++98 -Wall -Wextra -Werror

NAME = a.out

all : ${NAME}

${NAME} : ${OBJ}
	c++ ${FLAGS} ${OBJ} -o ${NAME}

%.o : %.cpp Fixed.hpp
	c++ ${FLAGS} -c $<

clean :
	rm -f ${OBJ}

fclean : clean
	rm -f ${NAME}

re : fclean all
