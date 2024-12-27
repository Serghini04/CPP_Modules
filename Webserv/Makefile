FILE = main.cpp Server.cpp

OBJ = ${FILE:.cpp=.o}

FLAGS = -Wall -Wextra -Werror

NAME = Server

all : ${NAME}

${NAME} : ${OBJ}
	c++ ${FLAGS} ${OBJ} -o ${NAME}

%.o : %.cpp Server.hpp
	c++ ${FLAGS} -c $<

clean :
	rm -f ${OBJ}

fclean : clean
	rm -f ${NAME}

re : fclean all
