FILE = main.cpp AMateria.cpp Character.cpp Cure.cpp Ice.cpp ICharacter.cpp\
	IMateriaSource.cpp MateriaSource.cpp

OBJ = ${FILE:.cpp=.o}

FLAGS = -Wall -Wextra -Werror #-fsanitize=address -g

NAME = Interface

all : ${NAME}

${NAME} : ${OBJ}
	c++ ${FLAGS} ${OBJ} -o ${NAME}

%.o : %.cpp AMateria.hpp Character.hpp Cure.hpp Ice.hpp ICharacter.hpp IMateriaSource.hpp MateriaSource.hpp
	c++ ${FLAGS} -c $<

clean :
	rm -f ${OBJ}

fclean : clean
	rm -f ${NAME}

re : fclean all
