# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: meserghi <meserghi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/07 14:37:11 by meserghi          #+#    #+#              #
#    Updated: 2024/12/14 13:32:01 by meserghi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FILE = main.cpp RPN.cpp

OBJ = ${FILE:.cpp=.o}

FLAGS = -std=c++98 -Wall -Wextra -Werror

NAME = RPN

all : ${NAME}

${NAME} : ${OBJ}
	c++ ${FLAGS} ${OBJ} -o ${NAME}

%.o : %.cpp RPN.hpp
	c++ ${FLAGS} -c $<

clean :
	rm -f ${OBJ}

fclean : clean
	rm -f ${NAME}

re : fclean all
