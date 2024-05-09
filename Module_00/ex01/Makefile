# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: meserghi <meserghi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/26 21:09:07 by meserghi          #+#    #+#              #
#    Updated: 2024/05/08 11:27:33 by meserghi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


# you need to add this if cin failing :
#		short Number;
#		while (!(cin >> Number)) {
#			cin.clear();
#			cin.ignore(numeric_limits<streamsize>::max(), '\n');
#			cout << ErrorMessage;
#		}

FILE = ex01.cpp PhoneBook.cpp Contact.cpp

OBJ = ${FILE:.cpp=.o}

FLAGS = -Wall -Wextra -Werror -std=c++98

NAME = PhoneBook

all : ${NAME}

${NAME} : ${OBJ}
	c++ ${FLAGS} ${OBJ} -o ${NAME}

%.o : %.cpp ex01.hpp
	c++ ${FLAGS} -c $<

clean :
	rm -f ${OBJ}

fclean : clean
	rm -f ${NAME}

re : fclean all
