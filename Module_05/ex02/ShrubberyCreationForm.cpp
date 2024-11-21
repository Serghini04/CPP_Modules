/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meserghi <meserghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 12:56:24 by meserghi          #+#    #+#             */
/*   Updated: 2024/11/21 21:52:48 by meserghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
# include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm", 145, 137)
{
	_target = target;
}

void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	std::fstream	fd;

  if (!getIsSigned())
  	throw Bureaucrat::IsNotSignedException();
  if (executor.getGrade() > getGradeToExecute())
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