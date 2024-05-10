# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: meserghi <meserghi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/09 16:36:39 by meserghi          #+#    #+#              #
#    Updated: 2024/05/10 12:09:26 by meserghi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FILE = main.cpp Replace.cpp

OBJ = ${FILE:.cpp=.o}

FLAGS = -std=c++98 -Wall -Wextra -Werror

NAME = Replace

all : ${NAME}

${NAME} : ${OBJ}
	c++ ${FLAGS} ${OBJ} -o ${NAME}

%.o : %.cpp Replace.hpp
	c++ ${FLAGS} -c $<

clean :
	rm -f ${OBJ}

fclean : clean
	rm -f ${NAME}

re : fclean all
