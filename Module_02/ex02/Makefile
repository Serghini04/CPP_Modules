# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: meserghi <meserghi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/17 12:02:32 by meserghi          #+#    #+#              #
#    Updated: 2024/08/08 13:26:30 by meserghi         ###   ########.fr        #
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
