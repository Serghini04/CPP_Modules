# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: meserghi <meserghi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/23 09:50:32 by meserghi          #+#    #+#              #
#    Updated: 2024/12/20 17:28:03 by meserghi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FILE = ScalarConverte.cpp main.cpp

OBJ = ${FILE:.cpp=.o}

FLAGS = -Wall -Wextra -Werror

NAME = convert

all : ${NAME}

${NAME} : ${OBJ}
	c++ ${FLAGS} ${OBJ} -o ${NAME}

%.o : %.cpp ScalarConverte.hpp
	c++ ${FLAGS} -c $<

clean :
	rm -f ${OBJ}

fclean : clean
	rm -f ${NAME}

re : fclean all
