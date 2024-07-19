# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: meserghi <meserghi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/26 21:09:07 by meserghi          #+#    #+#              #
#    Updated: 2024/07/19 17:31:10 by meserghi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FILE = ex01.cpp PhoneBook.cpp Contact.cpp

OBJ = ${FILE:.cpp=.o}

FLAGS = -Wall -Wextra -Werror -std=c++98

NAME = PhoneBook

all : ${NAME}

${NAME} : ${OBJ}
	c++ ${FLAGS} ${OBJ} -o ${NAME}

Contact.o : Contact.hpp
	c++ ${FLAGS} -c Contact.cpp

PhoneBook.o : PhoneBook.hpp
	c++ ${FLAGS} -c PhoneBook.cpp

%.o : %.cpp ex01.hpp
	c++ ${FLAGS} -c $<

clean :
	rm -f ${OBJ}

fclean : clean
	rm -f ${NAME}

re : fclean all
