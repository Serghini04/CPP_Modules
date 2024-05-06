# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: meserghi <meserghi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/04 15:04:29 by meserghi          #+#    #+#              #
#    Updated: 2024/05/05 14:53:23 by meserghi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FILE = Account.cpp tests.cpp

OBJ = ${FILE:.cpp=.o}

FLAGS = -Wall -Wextra -Werror -std=c++98

NAME = PhoneBook

all : ${NAME}

${NAME} : ${OBJ}
	c++ ${FLAGS} ${OBJ} -o ${NAME}

%.o : %.cpp Account.hpp
	c++ ${FLAGS} -c $<

clean :
	rm -f ${OBJ}

fclean : clean
	rm -f ${NAME}

re : fclean all
