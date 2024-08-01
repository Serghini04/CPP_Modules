#ifndef BRAIN_HPP
# define BRAIN_HPP
# include <iostream>

class Brain
{
	private:
		std::string	ideas[100];
	public:
		Brain();
		void	SetIdea(int index, std::string idea);
		std::string	GetIdea(int index);
		Brain(const Brain &clone);
		Brain &operator=(const Brain &clone);
		~Brain();
};

#endif