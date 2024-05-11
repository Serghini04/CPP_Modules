# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: meserghi <meserghi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/11 15:52:19 by meserghi          #+#    #+#              #
#    Updated: 2024/05/11 17:19:09 by meserghi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FILE = main.cpp Harl.cpp

OBJ = ${FILE:.cpp=.o}

FLAGS = -std=c++98 -Wall -Wextra -Werror

NAME = harlFilter

all : ${NAME}

${NAME} : ${OBJ}
	c++ ${FLAGS} ${OBJ} -o ${NAME}

%.o : %.cpp Harl.hpp
	c++ ${FLAGS} -c $<

clean :
	rm -f ${OBJ}

fclean : clean
	rm -f ${NAME}

re : fclean all
