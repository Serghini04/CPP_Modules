/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meserghi <meserghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 12:56:24 by meserghi          #+#    #+#             */
/*   Updated: 2024/12/20 20:35:46 by meserghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm", 137, 145)
{
	_target = target;
}

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 137, 145)
{
	_target = "Unknown target";
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &clone) : AForm("ShrubberyCreationForm", 137, 145)
{
	_target = clone._target;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &clone)
{
	if (this != &clone)
	{
		_target = clone._target;
		AForm::operator=(clone);
	}
	return *this;
}

void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	std::fstream	fd;

  if (!getIsSigned())
  	throw Bureaucrat::IsNotSignedException();
  else if (executor.getGrade() > getGradeToExecute())
  	throw Bureaucrat::GradeTooLowException();
  fd.open(this->_target + "_shrubbery", std::ios::out);
  if (!fd.is_open())
  {
  	std::cout << "Can't Open File " <<  this->_target + "_shrubbery.\n";
    return ;
  }
  fd << "                                                             \n";
  fd << "                                                             \n";
  fd << "                                                     .       \n";
  fd << "                                          .         ;        \n";
  fd << "             .              .              ;%     ;;         \n";
  fd << "               ,           ,                :;%  %;          \n";
  fd << "                :         ;                   :;%;'     .,   \n";
  fd << "       ,.        %;     %;            ;        %;'    ,;     \n";
  fd << "         ;       ;%;  %%;        ,     %;    ;%;    ,%'      \n";
  fd << "          %;       %;%;      ,  ;       %;  ;%;   ,%;'       \n";
  fd << "           ;%;      %;        ;%;        % ;%;  ,%;'         \n";
  fd << "            `%;.     ;%;     %;'         `;%%;.%;'           \n";
  fd << "             `:;%.    ;%%. %@;        %; ;@%;%'              \n";
  fd << "                `:%;.  :;bd%;          %;@%;'                \n";
  fd << "                  `@%:.  :;%.         ;@@%;'                 \n";
  fd << "                    `@%.  `;@%.      ;@@%;                   \n";
  fd << "                      `@%%. `@%%    ;@@%;                    \n";
  fd << "                        ;@%. :@%%  %@@%;                     \n";
  fd << "                          %@bd%%%bd%%:;                      \n";
  fd << "                            #@%%%%%:;;                       \n";
  fd << "                            %@@%%%::;                        \n";
  fd << "                            %@@@%(o);  . '                   \n";
  fd << "                            %@@@o%;:(.,'                     \n";
  fd << "                        `.. %@@@o%::;                        \n";
  fd << "                           `)@@@o%::;                        \n";
  fd << "                            %@@(o)::;                        \n";
  fd << "                           .%@@@@%::;                        \n";
  fd << "                           ;%@@@@%::;.                       \n";
  fd << "                          ;%@@@@%%:;;;.                      \n";
  fd << "                      ...;%@@@@@%%:;;;;,..                   \n";
  fd.close();
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{

}